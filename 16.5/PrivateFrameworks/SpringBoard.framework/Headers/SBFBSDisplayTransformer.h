// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFBSDISPLAYTRANSFORMER_H
#define SBFBSDISPLAYTRANSFORMER_H

@protocol FBSDisplayTransformer;

#import <Foundation/Foundation.h>

#import "SBMainDisplayConfigurationTransformer.h"

@interface SBFBSDisplayTransformer : NSObject <FBSDisplayTransformer>

 {
    SBMainDisplayConfigurationTransformer *_emulatedMainDisplayTransformer;
}




-(id)init;
-(id)transformDisplayConfiguration:(id)arg0 ;


@end


#endif