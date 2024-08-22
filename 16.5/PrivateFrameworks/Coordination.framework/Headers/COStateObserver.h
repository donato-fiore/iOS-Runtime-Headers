// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COSTATEOBSERVER_H
#define COSTATEOBSERVER_H

@class NSMutableDictionary, NSPredicate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface COStateObserver : NSObject

@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, copy, nonatomic) NSMutableDictionary *lastChanges; // ivar: _lastChanges
@property (readonly, retain, nonatomic) NSPredicate *predicate; // ivar: _predicate


-(id)description;
-(id)initWithDispatchQueue:(id)arg0 predicate:(id)arg1 block:(id)arg2 ;
-(void)notify:(id)arg0 ;


@end


#endif