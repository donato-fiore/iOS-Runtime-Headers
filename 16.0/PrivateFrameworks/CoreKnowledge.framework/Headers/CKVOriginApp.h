// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVORIGINAPP_H
#define CKVORIGINAPP_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKVOriginApp : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *universalAppId; // ivar: _universalAppId


+(BOOL)supportsSecureCoding;
+(id)Applications;
+(id)Calendar;
+(id)Contacts;
+(id)CoreRoutine;
+(id)HomeKit;
+(id)Keyboard;
+(id)MediaPlayer;
+(id)Messages;
+(id)Photos;
+(id)Portrait;
+(id)Shortcuts;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToApp:(id)arg0 ;
-(BOOL)isKnownApp;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAppId:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif