// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKANALYTICSSESSION_H
#define PKANALYTICSSESSION_H


#import <Foundation/Foundation.h>


@interface PKAnalyticsSession : NSObject {
    NSInteger _undosPerSession;
    NSInteger _strokesPerSession;
    NSInteger _textLineStraighteningPerSession;
    NSInteger _textLineStraighteningUndoPerSession;
}




-(id)init;


@end


#endif