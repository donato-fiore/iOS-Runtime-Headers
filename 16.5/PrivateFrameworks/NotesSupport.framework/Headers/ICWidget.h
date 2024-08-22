// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICWIDGET_H
#define ICWIDGET_H


#import <Foundation/Foundation.h>


@interface ICWidget : NSObject



+(id)sharedWidget;
-(void)reloadTimelineForKind:(id)arg0 reason:(id)arg1 ;
-(void)reloadTimelinesWithReason:(id)arg0 ;


@end


#endif