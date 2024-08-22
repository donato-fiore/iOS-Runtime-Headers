// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HOMOGRAPHYWARPSTAGESHARED_H
#define HOMOGRAPHYWARPSTAGESHARED_H


#import <Foundation/Foundation.h>

#import "HomographyWarpShaders.h"

@interface HomographyWarpStageShared : NSObject {
    HomographyWarpShaders *_shaders;
}




+(id)getSharedInstanceOrRelease:(BOOL)arg0 ;
+(id)sharedInstance;
+(void)releaseSharedInstance;
-(id)getShaders:(id)arg0 ;


@end


#endif