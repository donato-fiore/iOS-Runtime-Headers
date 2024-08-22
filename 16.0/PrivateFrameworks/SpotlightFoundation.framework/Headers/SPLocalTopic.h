// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPLOCALTOPIC_H
#define SPLOCALTOPIC_H

@class SFLocalTopic;



@interface SPLocalTopic : SFLocalTopic



+(id)localTopicWithContactName:(id)arg0 contactIdentifier:(id)arg1 ;
+(id)localTopicWithContactName:(id)arg0 contactIdentifier:(id)arg1 detailText:(id)arg2 ;
+(id)localTopicWithContactName:(id)arg0 emails:(id)arg1 phones:(id)arg2 detailText:(id)arg3 ;
+(id)localTopicWithDictionaryResult:(id)arg0 ;
+(id)localTopicWithTitle:(id)arg0 ;
+(id)localTopicWithTitle:(id)arg0 type:(int)arg1 score:(id)arg2 ;
+(id)localTopicWithTitle:(id)arg0 type:(int)arg1 score:(id)arg2 isCached:(BOOL)arg3 ;
+(id)localTopicWithTopicIdentifier:(id)arg0 ;
+(id)proactiveTopicWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 protectionClass:(id)arg2 detailText:(id)arg3 ;
-(id)initWithContactName:(id)arg0 contactIdentifier:(id)arg1 detailText:(id)arg2 ;
-(id)initWithContactName:(id)arg0 emails:(id)arg1 phones:(id)arg2 detailText:(id)arg3 ;
-(id)initWithDictionaryResult:(id)arg0 ;
-(id)initWithTitle:(id)arg0 type:(int)arg1 score:(id)arg2 isCached:(BOOL)arg3 ;
-(id)initWithTopicIdentifier:(id)arg0 ;


@end


#endif