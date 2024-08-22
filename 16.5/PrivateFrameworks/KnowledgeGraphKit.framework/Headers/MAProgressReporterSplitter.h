// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPROGRESSREPORTERSPLITTER_H
#define MAPROGRESSREPORTERSPLITTER_H


#import <Foundation/Foundation.h>

#import "MAProgressReporter.h"

@interface MAProgressReporterSplitter : NSObject {
    MAProgressReporter *_progressReporter;
    CGFloat _previousCheckpoint;
}




-(id)childProgressReporterToCheckpoint:(CGFloat)arg0 ;
-(id)initWithProgressReporter:(id)arg0 ;


@end


#endif