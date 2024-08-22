// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNAWINDOWSCENEEVENTREPORTER_H
#define ICNAWINDOWSCENEEVENTREPORTER_H

@class NSString;


#import "ICNAEventReporter.h"

@interface ICNAWindowSceneEventReporter : ICNAEventReporter

@property (nonatomic) CGFloat previousArea; // ivar: _previousArea
@property (readonly, nonatomic) NSString *saltedInstrumentationID;
@property (readonly, nonatomic) NSString *windowSceneID; // ivar: _windowSceneID


+(CGFloat)areaOfWindowScene:(id)arg0 ;
-(id)initWithSubTrackerName:(id)arg0 windowScene:(id)arg1 ;
-(void)startWindowSceneEventDurationTracking;
-(void)submitWindowSceneEvent;
-(void)submitWindowSceneResizeEventIfNecessaryWithWindowScene:(id)arg0 forceSubmit:(BOOL)arg1 ;


@end


#endif