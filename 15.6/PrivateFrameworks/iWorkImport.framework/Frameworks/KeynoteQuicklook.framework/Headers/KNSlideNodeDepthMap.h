// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNSLIDENODEDEPTHMAP_H
#define KNSLIDENODEDEPTHMAP_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface KNSlideNodeDepthMap : NSObject

@property (readonly, nonatomic) NSArray *depthsOfSlideNodes; // ivar: _depthsOfSlideNodes
@property (readonly, nonatomic) NSArray *slideNodes; // ivar: _slideNodes


-(id)initWithSlideNodes:(id)arg0 depths:(id)arg1 ;
-(void)enumerateSlideNodesAndDepthsUsingBlock:(id)arg0 ;


@end


#endif