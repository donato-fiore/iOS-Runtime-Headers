// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSURLTOKENINFO_H
#define APSURLTOKENINFO_H

@class NSString, NSDate, NSData;
@protocol APSTokenInfo, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface APSURLTokenInfo : NSObject <APSTokenInfo, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *topic; // ivar: _topic
@property (readonly, nonatomic) NSInteger type;
@property (retain, nonatomic) NSData *vapidPublicKey; // ivar: _vapidPublicKey


+(BOOL)supportsSecureCoding;
-(BOOL)allowMultipleTokens;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTopic:(id)arg0 ;
-(id)initWithTopic:(id)arg0 vapidPublicKey:(id)arg1 ;
-(id)initWithTopic:(id)arg0 vapidPublicKey:(id)arg1 expirationDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif