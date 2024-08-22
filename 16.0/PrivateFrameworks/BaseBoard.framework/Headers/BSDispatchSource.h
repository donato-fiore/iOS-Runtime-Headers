// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSDISPATCHSOURCE_H
#define BSDISPATCHSOURCE_H

@class NSString;
@protocol BSInvalidatable, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface BSDispatchSource : NSObject <BSInvalidatable>

 {
    *dispatch_source_type_s _type;
    NSObject<OS_dispatch_source> *_source;
    int _activated;
    int _invalidated;
    id *_eventHandler;
    id *_cancelHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;
-(void)invalidate;


@end


#endif