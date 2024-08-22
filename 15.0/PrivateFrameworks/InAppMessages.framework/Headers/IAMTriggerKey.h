// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IAMTRIGGERKEY_H
#define IAMTRIGGERKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IAMTriggerKey : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *nameSpacedKeyName;


+(id)nameSpacedKeyNameForName:(id)arg0 bundleIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 bundleIdentifier:(id)arg1 ;


@end


#endif