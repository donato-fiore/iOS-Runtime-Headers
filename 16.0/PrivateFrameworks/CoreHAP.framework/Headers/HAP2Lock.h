// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2LOCK_H
#define HAP2LOCK_H

@class NSString;
@protocol NSLocking;


#import "HAP2LoggingObject.h"

@interface HAP2Lock : HAP2LoggingObject {
    uint8_t _lockCount;
}


@property (readonly, nonatomic) NSObject<NSLocking> *internalLock; // ivar: _internalLock
@property (readonly, nonatomic) NSString *name;


+(id)lockWithName:(id)arg0 ;
+(id)new;
-(id)init;
-(id)initWithLock:(id)arg0 name:(id)arg1 ;
// -(void)_performBlock:(id)arg0 allowRecursive:(unk)arg1  ;
-(void)assertOwner;
-(void)performBlock:(id)arg0 ;


@end


#endif