// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAGELOADTEST_H
#define PAGELOADTEST_H

@class NSArray, _WKRemoteObjectInterface;

#import <Foundation/Foundation.h>

#import "TabDocument.h"

@interface PageLoadTest : NSObject {
    TabDocument *_tabDocument;
    NSArray *_pagesNeedingMemoryWarningSent;
    _WKRemoteObjectInterface *_eventsListenerInterface;
}




-(id)initWithTabDocument:(id)arg0 ;
-(id)initWithTabDocument:(id)arg0 pagesNeedingMemoryWarningSent:(id)arg1 ;
-(void)_enablePageLoadMeasurementCollection;
-(void)_invalidateRemoteObjects;
-(void)_setUpPageLoadTestEventsListener;
-(void)_setUpWebProcessForPageLoadMeasurementCollection;
-(void)dealloc;
-(void)didFinishPageLoadWithLoadData:(id)arg0 ;
-(void)resetAfterWebProcessCrash;


@end


#endif