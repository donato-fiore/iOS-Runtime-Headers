// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTMETRICSCONTROLLER_H
#define SUSCRIPTMETRICSCONTROLLER_H

@class SSMetricsController, NSString;
@protocol ISURLBagObserver;


#import "SUScriptObject.h"

@interface SUScriptMetricsController : SUScriptObject <ISURLBagObserver>

 {
    SSMetricsController *_metricsController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)init;
-(id)scriptAttributeKeys;
-(void)_configureWithBagDictionary:(id)arg0 ;
-(void)bagDidChange:(id)arg0 ;
-(void)dealloc;
-(void)flushUnreportedEventsWithCompletionFunction:(id)arg0 ;
-(void)recordEventWithTopic:(id)arg0 properties:(id)arg1 completionFunction:(id)arg2 ;


@end


#endif