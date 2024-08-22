// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFANALYTICSCONTEXTMENUEVENT_H
#define HFANALYTICSCONTEXTMENUEVENT_H

@class NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsContextMenuEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *contextMenuTitle; // ivar: _contextMenuTitle
@property (retain, nonatomic) NSString *contextType; // ivar: _contextType
@property (retain, nonatomic) NSString *itemClassName; // ivar: _itemClassName
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (retain, nonatomic) NSString *sourceViewControllerClassName; // ivar: _sourceViewControllerClassName


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif