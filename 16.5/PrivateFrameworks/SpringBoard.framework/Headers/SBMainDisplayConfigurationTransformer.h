// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMAINDISPLAYCONFIGURATIONTRANSFORMER_H
#define SBMAINDISPLAYCONFIGURATIONTRANSFORMER_H

@protocol FBSDisplayTransformer;

#import <Foundation/Foundation.h>


@interface SBMainDisplayConfigurationTransformer : NSObject <FBSDisplayTransformer>





+(id)transformedMainDisplayConfigurationForConfiguration:(id)arg0 ;
-(id)transformDisplayConfiguration:(id)arg0 ;


@end


#endif