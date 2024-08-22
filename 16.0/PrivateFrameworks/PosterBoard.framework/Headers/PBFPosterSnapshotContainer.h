// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTERSNAPSHOTCONTAINER_H
#define PBFPOSTERSNAPSHOTCONTAINER_H

@class PRSPosterSnapshot;

#import <Foundation/Foundation.h>


@interface PBFPosterSnapshotContainer : NSObject {
    *CGImageBlockSet _imageBlockSet;
}


@property (readonly, nonatomic) PRSPosterSnapshot *posterSnapshot; // ivar: _posterSnapshot


-(id)initWithPosterSnapshot:(id)arg0 imageBlockSet:(struct CGImageBlockSet *)arg1 ;
-(void)dealloc;


@end


#endif