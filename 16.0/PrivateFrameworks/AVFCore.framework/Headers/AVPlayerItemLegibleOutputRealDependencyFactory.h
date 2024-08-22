// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYERITEMLEGIBLEOUTPUTREALDEPENDENCYFACTORY_H
#define AVPLAYERITEMLEGIBLEOUTPUTREALDEPENDENCYFACTORY_H

@class NSString;
@protocol AVPlayerItemLegibleOutputDependencyFactory;

#import <Foundation/Foundation.h>


@interface AVPlayerItemLegibleOutputRealDependencyFactory : NSObject <AVPlayerItemLegibleOutputDependencyFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)playerItemOutputHostForPlayerItem:(id)arg0 ;


@end


#endif