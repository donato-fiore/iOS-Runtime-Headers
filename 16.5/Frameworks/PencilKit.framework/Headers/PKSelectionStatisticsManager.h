// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSELECTIONSTATISTICSMANAGER_H
#define PKSELECTIONSTATISTICSMANAGER_H


#import <Foundation/Foundation.h>

#import "PKSelectionStatisticsSession.h"

@interface PKSelectionStatisticsManager : NSObject {
    PKSelectionStatisticsSession *_selectionSession;
    CGPoint _lastContentOffset;
}




+(id)sharedStatisticsManager;
-(void)_endSelectionSession;
-(void)_recordSelectionSession:(id)arg0 ;
-(void)logEndSelectionSessionIfNecessary;
-(void)logScrollEventWithContentOffset:(struct CGPoint )arg0 ;
-(void)logSelectionAction:(NSInteger)arg0 ;
-(void)recordDidMakeSelectionWithType:(NSInteger)arg0 ;
-(void)recordLassoSelectionEventWithContentType:(NSInteger)arg0 ;
-(void)recordSmartSelectionEventWithType:(NSInteger)arg0 contentType:(NSInteger)arg1 gestureInvoked:(NSInteger)arg2 ;


@end


#endif