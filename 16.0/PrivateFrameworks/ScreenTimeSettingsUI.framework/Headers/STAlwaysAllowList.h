// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STALWAYSALLOWLIST_H
#define STALWAYSALLOWLIST_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface STAlwaysAllowList : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *allowedBundleIDs; // ivar: _allowedBundleIDs
@property (nonatomic) BOOL shouldAllowEditing; // ivar: _shouldAllowEditing


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBlueprint:(id)arg0 ;


@end


#endif