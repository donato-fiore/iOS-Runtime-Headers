// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSELECTIONSTATISTICSSESSION_H
#define PKSELECTIONSTATISTICSSESSION_H

@class NSMutableArray, NSDate, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface PKSelectionStatisticsSession : NSObject {
    NSMutableArray *_selectionGestures;
    NSMutableArray *_selectionActions;
    NSDate *_startTime;
}


@property (retain, nonatomic) NSString *lastActionTaken; // ivar: _lastActionTaken
@property (nonatomic) NSInteger lastContentType; // ivar: _lastContentType
@property (nonatomic) NSInteger lastSelectionType; // ivar: _lastSelectionType
@property (retain, nonatomic) NSString *lastSignificantActionTaken; // ivar: _lastSignificantActionTaken
@property (nonatomic) NSInteger numberOfTimesSelectionWasClearedInASession; // ivar: _numberOfTimesSelectionWasClearedInASession
@property (readonly, nonatomic) NSDictionary *selectionActionDictionary;
@property (nonatomic) NSInteger selectionGestureCount; // ivar: _selectionGestureCount
@property (readonly, nonatomic) NSDictionary *selectionGestureDictionary;
@property (nonatomic) CGFloat timeSpentSelecting; // ivar: _timeSpentSelecting


-(id)init;
-(void)logGesture:(NSInteger)arg0 selectionType:(NSInteger)arg1 contentType:(NSInteger)arg2 ;
-(void)logSelectionAction:(NSInteger)arg0 ;


@end


#endif