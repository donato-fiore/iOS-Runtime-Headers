// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSHORTCUTSEDITORGROUPEDUIFEEDBACKPUBLISHER_H
#define ATXSHORTCUTSEDITORGROUPEDUIFEEDBACKPUBLISHER_H

@class BPSPublisher;

#import <Foundation/Foundation.h>


@interface ATXShortcutsEditorGroupedUIFeedbackPublisher : NSObject {
    BPSPublisher *_uiFeedbackPublisher;
}




-(id)init;
-(id)initWithUIFeedbackPublisher:(id)arg0 ;
-(id)shortcutsEditorUIFeedbackPublisher;


@end


#endif