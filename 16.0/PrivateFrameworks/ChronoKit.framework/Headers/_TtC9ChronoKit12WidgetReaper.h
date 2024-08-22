// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9CHRONOKIT12WIDGETREAPER_H
#define _TTC9CHRONOKIT12WIDGETREAPER_H

@class NSProgress;
@protocol NSProgressReporting;

#import <Foundation/Foundation.h>


@interface _TtC9ChronoKit12WidgetReaper : NSObject <NSProgressReporting>

 {
    ? candidateURLsToRemove;
    ? candidateURLsToRemoveWithProtectedChildren;
    ? urlsToProtect;
    ? objectWillChange;
    ? fileManager;
}


@property (nonatomic, retain) NSProgress *progress; // ivar: progress


-(id)init;


@end


#endif