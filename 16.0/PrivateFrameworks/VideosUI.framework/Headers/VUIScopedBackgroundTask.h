// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUISCOPEDBACKGROUNDTASK_H
#define VUISCOPEDBACKGROUNDTASK_H


#import <Foundation/Foundation.h>


@interface VUIScopedBackgroundTask : NSObject

@property (nonatomic) NSUInteger taskIdentifier; // ivar: _taskIdentifier


-(id)init;
-(id)initWithIdentifier:(id)arg0 expirationHandler:(id)arg1 ;
-(void)_endTask;
-(void)dealloc;


@end


#endif