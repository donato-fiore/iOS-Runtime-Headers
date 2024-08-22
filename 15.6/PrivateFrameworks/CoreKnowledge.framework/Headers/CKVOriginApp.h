// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVORIGINAPP_H
#define CKVORIGINAPP_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKVOriginApp : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *universalAppId; // ivar: _universalAppId


+(BOOL)supportsSecureCoding;
+(id)Applications;
+(id)Contacts;
+(id)HomeKit;
+(id)MediaPlayer;
+(id)Messages;
+(id)Photos;
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