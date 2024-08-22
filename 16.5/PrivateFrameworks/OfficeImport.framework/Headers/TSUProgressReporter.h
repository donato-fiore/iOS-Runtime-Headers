// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUPROGRESSREPORTER_H
#define TSUPROGRESSREPORTER_H

@class NSProgress, NSString;
@protocol NSProgressReporting;

#import <Foundation/Foundation.h>


@interface TSUProgressReporter : NSObject <NSProgressReporting>

 {
    NSProgress *_progress;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;


-(id)initWithTotalUnitCount:(NSInteger)arg0 ;


@end


#endif