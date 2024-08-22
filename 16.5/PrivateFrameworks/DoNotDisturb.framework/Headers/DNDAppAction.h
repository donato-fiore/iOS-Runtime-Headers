// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDAPPACTION_H
#define DNDAPPACTION_H

@class LNAction, NSString, NSData;
@protocol NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface DNDAppAction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) LNAction *action;
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSData *encodedAction; // ivar: _encodedAction
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) LNAction *rawAction; // ivar: _rawAction


+(BOOL)archivingIsSupported:(*id)arg0 ;
+(BOOL)runtimeIsSupported:(*id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)appActionFromDictionaryRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithAction:(id)arg0 bundleIdentifier:(id)arg1 actionIdentifier:(id)arg2 encodedAction:(id)arg3 enabled:(BOOL)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)effectiveBundleIdentifier;
-(id)initWithAction:(id)arg0 enabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEncodedAction:(id)arg0 actionIdentifier:(id)arg1 bundleIdentifier:(id)arg2 enabled:(BOOL)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif