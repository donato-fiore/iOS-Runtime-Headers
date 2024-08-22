// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSAPPTOKENINFO_H
#define APSAPPTOKENINFO_H

@class NSString, NSDate, NSData;
@protocol APSTokenInfo, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface APSAppTokenInfo : NSObject <APSTokenInfo, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isUnextended; // ivar: _isUnextended
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *topic; // ivar: _topic
@property (readonly, nonatomic) NSInteger type;
@property (readonly, nonatomic) NSData *vapidPublicKey;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initUnextendedAppTokenWithTopic:(id)arg0 identifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTopic:(id)arg0 identifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif