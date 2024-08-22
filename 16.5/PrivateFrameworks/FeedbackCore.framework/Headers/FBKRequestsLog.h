// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKREQUESTSLOG_H
#define FBKREQUESTSLOG_H

@class NSURL, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FBKRequestsLog : NSObject

@property BOOL isActive; // ivar: _isActive
@property (retain) NSURL *requestDirectoryURL; // ivar: _requestDirectoryURL
@property (retain) NSObject<OS_dispatch_queue> *requestSaveQueue; // ivar: _requestSaveQueue
@property (retain) NSMutableArray *requests; // ivar: _requests


+(id)sharedInstance;
-(BOOL)active;
-(id)init;
-(id)mutableArrayValueForKey:(id)arg0 ;
-(void)_addRequest:(id)arg0 ;
-(void)addRequest:(id)arg0 ;
-(void)insertObject:(id)arg0 inRequestsAtIndex:(NSUInteger)arg1 ;
-(void)removeObjectFromRequestsAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectInRequestsAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;


@end


#endif