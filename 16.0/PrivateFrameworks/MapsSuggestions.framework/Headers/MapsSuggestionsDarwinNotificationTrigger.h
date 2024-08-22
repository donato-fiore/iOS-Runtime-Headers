// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSDARWINNOTIFICATIONTRIGGER_H
#define MAPSSUGGESTIONSDARWINNOTIFICATIONTRIGGER_H



#import "MapsSuggestionsBaseTrigger.h"

@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {
    char * _notificationName;
    int _notificationToken;
}




-(char *)notificationName;
-(id)initWithName:(id)arg0 ;
-(id)initWithNotificationName:(char *)arg0 ;
-(id)initWithNotificationName:(char *)arg0 triggerName:(id)arg1 ;
-(void)dealloc;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;


@end


#endif