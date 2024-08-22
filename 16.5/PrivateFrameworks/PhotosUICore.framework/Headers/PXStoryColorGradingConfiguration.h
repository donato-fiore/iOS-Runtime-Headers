// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCOLORGRADINGCONFIGURATION_H
#define PXSTORYCOLORGRADINGCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PXStoryColorGradingConfiguration : NSObject

@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSArray *cubeInfos; // ivar: _cubeInfos


-(id)init;
-(id)initWithCubeInfos:(id)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;


@end


#endif