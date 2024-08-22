// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBBACKGROUNDTASKCONTROLLER_H
#define WEBBACKGROUNDTASKCONTROLLER_H


#import <Foundation/Foundation.h>


@interface WebBackgroundTaskController : NSObject

@property (copy, nonatomic) id *backgroundTaskEndBlock; // ivar: _backgroundTaskEndBlock
@property (copy, nonatomic) id *backgroundTaskStartBlock; // ivar: _backgroundTaskStartBlock
@property (nonatomic) NSUInteger invalidBackgroundTaskIdentifier; // ivar: _invalidBackgroundTaskIdentifier


+(id)sharedController;
-(NSUInteger)startBackgroundTaskWithExpirationHandler:(id)arg0 ;
-(void)dealloc;
-(void)endBackgroundTaskWithIdentifier:(NSUInteger)arg0 ;


@end


#endif