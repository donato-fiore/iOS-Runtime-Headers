// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7NEWSUI218AUDIOACTIONHANDLER_H
#define _TTC7NEWSUI218AUDIOACTIONHANDLER_H

@class SwiftObject;
@protocol NAAudioActionHandlerType;



@interface _TtC7NewsUI218AudioActionHandler : SwiftObject <NAAudioActionHandlerType>

 {
    ? headlineConverter;
    ? audioUIMenuProvider;
    ? bundleSubscriptionManager;
    ? commandCenter;
    ? playbackState;
}




-(id)accessibilityActionsForSheetFor:(id)arg0 willPerform:(id)arg1 ;
-(id)buttonActionsFor:(id)arg0 willPerform:(id)arg1 ;
-(void)performActionsFor:(id)arg0 willPerform:(id)arg1 ;
-(void)setAudioButtonMenuOn:(id)arg0 ;


@end


#endif