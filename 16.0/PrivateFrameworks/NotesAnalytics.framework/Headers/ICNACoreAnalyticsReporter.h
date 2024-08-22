// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNACOREANALYTICSREPORTER_H
#define ICNACOREANALYTICSREPORTER_H

@class NSString;


#import "ICNAOptedInObject.h"

@interface ICNACoreAnalyticsReporter : ICNAOptedInObject

@property (retain) NSString *currentlyViewedNoteIdentifier; // ivar: _currentlyViewedNoteIdentifier
@property (retain) NSString *noteViewApproach; // ivar: _noteViewApproach


+(id)analyticsQueue;
+(id)sharedReporter;
-(id)consumeNoteViewApproach;
-(id)init;
-(void)appSessionWillEnd:(id)arg0 ;
-(void)fireDeepLinkCreationEventWithNote:(id)arg0 contentItem:(id)arg1 ;
-(void)fireNoteViewEventWithNote:(id)arg0 noteData:(id)arg1 noteContentData:(id)arg2 ;
-(void)fireSnapshotWithNoteReportToDevice:(id)arg0 ;
-(void)fireUpdateHandWritingContentEventWithNoteData:(id)arg0 pencilIsUsed:(BOOL)arg1 ;


@end


#endif