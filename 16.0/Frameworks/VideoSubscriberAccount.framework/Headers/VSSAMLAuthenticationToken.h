// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSSAMLAUTHENTICATIONTOKEN_H
#define VSSAMLAUTHENTICATIONTOKEN_H

@class NSString, NSDate, NSData;
@protocol VSAuthenticationToken;

#import <Foundation/Foundation.h>


@interface VSSAMLAuthenticationToken : NSObject <VSAuthenticationToken>



@property (copy, nonatomic) NSString *body;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *serializedData; // ivar: _serializedData
@property (retain, nonatomic) NSDate *simulatedExpirationDate; // ivar: _simulatedExpirationDate
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFromUnsupportedProvider;
-(BOOL)isOpaque;
-(BOOL)isValid;
-(id)initWithSerializedData:(id)arg0 ;


@end


#endif