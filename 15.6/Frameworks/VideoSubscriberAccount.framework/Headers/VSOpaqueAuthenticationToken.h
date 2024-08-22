// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSOPAQUEAUTHENTICATIONTOKEN_H
#define VSOPAQUEAUTHENTICATIONTOKEN_H

@class NSString, NSDate, NSData;
@protocol VSAuthenticationToken;

#import <Foundation/Foundation.h>


@interface VSOpaqueAuthenticationToken : NSObject <VSAuthenticationToken>



@property (copy, nonatomic) NSString *body; // ivar: _body
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *serializedData;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFromUnsupportedProvider;
-(BOOL)isOpaque;
-(BOOL)isValid;
-(id)init;
-(id)initWithSerializedData:(id)arg0 ;


@end


#endif