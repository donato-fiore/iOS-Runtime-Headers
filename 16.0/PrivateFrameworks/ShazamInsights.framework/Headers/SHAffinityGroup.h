// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHAFFINITYGROUP_H
#define SHAFFINITYGROUP_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SHAffinityGroup : NSObject

@property (readonly, nonatomic) NSInteger cohesionLevel; // ivar: _cohesionLevel
@property (readonly, nonatomic) NSInteger groupType; // ivar: _groupType
@property (readonly, nonatomic) NSArray *mediaItems;
@property (retain, nonatomic) NSMutableArray *mutableMediaItems; // ivar: _mutableMediaItems


-(id)init;
-(id)initWithType:(NSInteger)arg0 cohesionLevel:(NSInteger)arg1 ;
-(void)appendMediaItem:(id)arg0 ;


@end


#endif