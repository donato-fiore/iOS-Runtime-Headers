// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYBOARDARBITERDEBUG_H
#define _UIKEYBOARDARBITERDEBUG_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _UIKeyboardArbiterDebug : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _importantCount;
    NSMutableArray *_entries;
    BOOL _disable;
}


@property (nonatomic) BOOL pause; // ivar: _pause


+(id)sharedInstance;
-(id)init;
-(void)addAsynchronousData:(id)arg0 ;
-(void)addEntry:(id)arg0 ;
-(void)debugWithMessage:(id)arg0 ;
-(void)errorWithMessage:(id)arg0 ;
-(void)getDebugInfoDictionariesWithCompletionHandler:(id)arg0 ;
-(void)infoWithMessage:(id)arg0 ;


@end


#endif