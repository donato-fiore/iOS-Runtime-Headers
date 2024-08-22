// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSHAREDPERSONA_H
#define IMSHAREDPERSONA_H

@class NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IMSharedPersona : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *senderID; // ivar: _senderID
@property (readonly, copy, nonatomic) NSString *suggestedDisplayName; // ivar: _suggestedDisplayName


+(BOOL)supportsSecureCoding;
+(id)personaFromDictionaryRepresentation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSenderID:(id)arg0 suggestedDisplayName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif