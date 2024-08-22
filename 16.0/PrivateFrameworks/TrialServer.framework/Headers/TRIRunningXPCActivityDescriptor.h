// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIRUNNINGXPCACTIVITYDESCRIPTOR_H
#define TRIRUNNINGXPCACTIVITYDESCRIPTOR_H

@class NSString;
@protocol NSCopying, OS_os_transaction, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface TRIRunningXPCActivityDescriptor : NSObject <NSCopying>

 {
    NSObject<OS_os_transaction> *_txn;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (readonly, nonatomic) NSUInteger capabilities; // ivar: _capabilities
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) unsigned int generationCount; // ivar: _generationCount
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) id *shouldDefer; // ivar: _shouldDefer


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initForImmediateWorkWithCapabilities:(NSUInteger)arg0 ;
-(id)initWithActivity:(id)arg0 capabilities:(NSUInteger)arg1 name:(id)arg2 ;


@end


#endif