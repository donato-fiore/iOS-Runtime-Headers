// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFWALLPAPERHOMEKITOBJECTKEY_H
#define HFWALLPAPERHOMEKITOBJECTKEY_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface HFWallpaperHomeKitObjectKey : NSObject

@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)stringFromHomeKitObjectType:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithHomeKitObject:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 uniqueIdentifier:(id)arg1 ;


@end


#endif