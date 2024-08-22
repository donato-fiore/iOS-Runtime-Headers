// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC32PERSONALIZATIONPORTRAITINTERNALS22BACKGROUNDTEXTCONSUMER_H
#define _TTC32PERSONALIZATIONPORTRAITINTERNALS22BACKGROUNDTEXTCONSUMER_H

@class TtC32PersonalizationPortraitInternals8Consumer;
@protocol HVNewsConsumer, HVNotesConsumer, HVSafariConsumer, HVThirdPartyAppConsumer, HVMailConsumer;



@interface _TtC32PersonalizationPortraitInternals22BackgroundTextConsumer : TtC32PersonalizationPortraitInternals8Consumer <HVNewsConsumer, HVNotesConsumer, HVSafariConsumer, HVThirdPartyAppConsumer, HVMailConsumer>





-(id)consumeMailContentWithContext:(id)arg0 ;
-(id)consumeNewsArticleViewsWithContext:(id)arg0 ;
-(id)consumeNotesContentWithContext:(id)arg0 ;
-(id)consumeSafariContentWithContext:(id)arg0 ;
-(id)consumeThirdPartyAppContentWithContext:(id)arg0 ;
-(id)consumerName;
-(id)deleteDataDerivedFromContentMatchingRequest:(id)arg0 ;


@end


#endif