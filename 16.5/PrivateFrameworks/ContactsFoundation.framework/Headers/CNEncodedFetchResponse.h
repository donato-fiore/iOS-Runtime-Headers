// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNENCODEDFETCHRESPONSE_H
#define CNENCODEDFETCHRESPONSE_H

@class NSData, NSString, NSSet, NSDictionary;
@protocol CNEncodedFetchResponse, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNEncodedFetchResponse : NSObject <CNEncodedFetchResponse, NSSecureCoding>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *identifierAccountingData; // ivar: _identifierAccountingData
@property (retain, nonatomic) NSDictionary *matchInfo; // ivar: _matchInfo
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)emptyResponse;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif