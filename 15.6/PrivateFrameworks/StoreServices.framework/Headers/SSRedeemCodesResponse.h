// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSREDEEMCODESRESPONSE_H
#define SSREDEEMCODESRESPONSE_H

@class NSDictionary, NSArray, NSString;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSRedeemCodesResponse : NSObject <SSXPCCoding>

 {
    NSDictionary *_codeResponses;
    NSDictionary *_errors;
    NSDictionary *_redeemedCodes;
}


@property (readonly, copy, nonatomic) NSArray *codeResponses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *failedCodes;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *redeemedCodes;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)dictionaryForCode:(id)arg0 ;
-(id)errorForCode:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)responseDictionaryForCode:(id)arg0 ;
-(void)dealloc;


@end


#endif