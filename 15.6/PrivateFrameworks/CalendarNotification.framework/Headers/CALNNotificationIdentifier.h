// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNNOTIFICATIONIDENTIFIER_H
#define CALNNOTIFICATIONIDENTIFIER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CALNNotificationIdentifier : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier; // ivar: _sourceClientIdentifier
@property (readonly, copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (readonly, copy, nonatomic) NSString *stringRepresentation; // ivar: _stringRepresentation


+(id)_allowedCharacterSetForEncodingNotificationIdentifierComponents;
+(id)_constructNotificationIdentifierStringRepresentationFromComponents:(id)arg0 ;
+(id)_deconstructNotificationIdentifierStringRepresentationIntoComponents:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNotificationIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSourceIdentifier:(id)arg0 sourceClientIdentifier:(id)arg1 ;
-(id)initWithSourceIdentifier:(id)arg0 sourceClientIdentifier:(id)arg1 stringRepresentation:(id)arg2 ;
-(id)initWithStringRepresentation:(id)arg0 ;


@end


#endif