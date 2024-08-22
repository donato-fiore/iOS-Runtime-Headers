// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2TLVPARAMSERVICELIST_H
#define HAP2TLVPARAMSERVICELIST_H

@class NSString, NSMutableArray;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>


@interface HAP2TLVParamServiceList : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *serviceSignatureList; // ivar: _serviceSignatureList
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithServiceSignatureList:(id)arg0 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif