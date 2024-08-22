// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPGRAPHICSCONTAINER_H
#define MFPGRAPHICSCONTAINER_H


#import <Foundation/Foundation.h>

#import "MFPGraphicsState.h"

@interface MFPGraphicsContainer : NSObject {
    MFPGraphicsState *mParentGraphicsState;
    CGAffineTransform mContainerTransform;
}




-(id)initWithParentGraphicsState:(id)arg0 containerTransform:(struct CGAffineTransform )arg1 ;
-(id)parentGraphicsState;
-(struct CGAffineTransform )containerTransform;


@end


#endif