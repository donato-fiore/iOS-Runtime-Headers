// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSYSTEMACTION_H
#define DNDSYSTEMACTION_H

@class WFToggleSettingContextualAction, NSString, WFReverseContextualAction;
@protocol NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface DNDSystemAction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>



@property (readonly, retain, nonatomic) WFToggleSettingContextualAction *action; // ivar: _action
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) WFReverseContextualAction *reverseAction; // ivar: _reverseAction


+(BOOL)runtimeIsSupported:(*id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAction:(id)arg0 enabled:(BOOL)arg1 ;
-(id)initWithAction:(id)arg0 reverseAction:(id)arg1 enabled:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif