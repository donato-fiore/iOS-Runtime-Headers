// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTMETRICSKITTEMPLATE_H
#define MTMETRICSKITTEMPLATE_H

@class NSString;
@protocol MTDelegatePackage;

#import <Foundation/Foundation.h>

#import "MTConfig.h"
#import "MTEventHandlers.h"
#import "MTSystem.h"
#import "MTUtils.h"

@interface MTMetricsKitTemplate : NSObject

@property (retain, nonatomic) MTConfig *config; // ivar: _config
@property (retain, nonatomic) NSObject<MTDelegatePackage> *delegatePackage; // ivar: _delegatePackage
@property (retain, nonatomic) MTEventHandlers *eventHandlers; // ivar: _eventHandlers
@property (retain, nonatomic) MTSystem *system; // ivar: _system
@property (retain, nonatomic) NSString *topic; // ivar: _topic
@property (retain, nonatomic) MTUtils *utils; // ivar: _utils


+(id)kitWithTopic:(id)arg0 amsBag:(id)arg1 ;
+(id)kitWithTopic:(id)arg0 bagProfile:(id)arg1 profileVersion:(id)arg2 ;
-(id)initWithTopic:(id)arg0 ;
-(id)initWithTopic:(id)arg0 bagProfile:(id)arg1 profileVersion:(id)arg2 ;
-(id)initWithTopic:(id)arg0 delegatePackage:(id)arg1 ;
-(id)metricsDataWithEventHandlerName:(id)arg0 eventData:(id)arg1 ;
-(id)metricsDataWithEventHandlerName:(id)arg0 fields:(id)arg1 ;
-(id)metricsDataWithEventHandlerName:(id)arg0 pageData:(id)arg1 eventData:(id)arg2 ;
-(id)metricsDataWithEventHandlerName:(id)arg0 pageData:(id)arg1 fields:(id)arg2 ;
-(id)metricsDataWithEventHandlerName:(id)arg0 pageId:(id)arg1 pageType:(id)arg2 pageContext:(id)arg3 eventData:(id)arg4 ;
-(id)metricsDataWithEventHandlerName:(id)arg0 pageId:(id)arg1 pageType:(id)arg2 pageContext:(id)arg3 fields:(id)arg4 ;
-(id)sampling;


@end


#endif