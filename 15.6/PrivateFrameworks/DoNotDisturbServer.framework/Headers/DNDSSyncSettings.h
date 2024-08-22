// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSSYNCSETTINGS_H
#define DNDSSYNCSETTINGS_H

@protocol NSMutableCopying, NSCopying;

#import <Foundation/Foundation.h>


@interface DNDSSyncSettings : NSObject <NSMutableCopying, NSCopying>



@property (readonly, nonatomic, getter=isCloudSyncEnabled) BOOL cloudSyncEnabled; // ivar: _cloudSyncEnabled
@property (readonly, nonatomic, getter=isPairSyncEnabled) BOOL pairSyncEnabled; // ivar: _pairSyncEnabled


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPairSyncEnabled:(BOOL)arg0 cloudSyncEnabled:(BOOL)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif