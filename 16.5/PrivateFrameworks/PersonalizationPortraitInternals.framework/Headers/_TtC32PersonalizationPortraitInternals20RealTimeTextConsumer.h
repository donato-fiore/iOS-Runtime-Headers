// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC32PERSONALIZATIONPORTRAITINTERNALS20REALTIMETEXTCONSUMER_H
#define _TTC32PERSONALIZATIONPORTRAITINTERNALS20REALTIMETEXTCONSUMER_H

@class TtC32PersonalizationPortraitInternals8Consumer;
@protocol HVSafariConsumer, HVMessagesConsumer, HVRemindersConsumer, HVInteractionConsumer;



@interface _TtC32PersonalizationPortraitInternals20RealTimeTextConsumer : TtC32PersonalizationPortraitInternals8Consumer <HVSafariConsumer, HVMessagesConsumer, HVRemindersConsumer, HVInteractionConsumer>





-(id)consumeInteractionWithContext:(id)arg0 ;
-(id)consumeMessagesContentWithContext:(id)arg0 ;
-(id)consumeRemindersContentWithContext:(id)arg0 ;
-(id)consumeSafariContentWithContext:(id)arg0 ;
-(id)consumerName;
-(id)deleteDataDerivedFromContentMatchingRequest:(id)arg0 ;


@end


#endif