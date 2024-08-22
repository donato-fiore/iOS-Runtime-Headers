// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSWSTRINGDONATIONCONSUMER_H
#define PPSWSTRINGDONATIONCONSUMER_H

@class TtC32PersonalizationPortraitInternals8Consumer;



@interface PPSWStringDonationConsumer : TtC32PersonalizationPortraitInternals8Consumer



-(?)consumeWithDonationcompletionHandler;
-(id)init;
-(id)initWithTopicStore:(id)arg0 entityStore:(id)arg1 locationStore:(id)arg2 entityDissector:(id)arg3 topicDissector:(id)arg4 ;
-(id)initWithTopicStore:(id)arg0 entityStore:(id)arg1 locationStore:(id)arg2 writebackDissector:(id)arg3 entityDissector:(id)arg4 topicDissector:(id)arg5 ;


@end


#endif