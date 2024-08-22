// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOREROLLBACK_H
#define SUCOREROLLBACK_H

@class SUCorePersistedState;
@protocol NSSecureCoding, NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SUCoreRollbackDescriptor.h"

@interface SUCoreRollback : NSObject <NSSecureCoding, NSCopying>

 {
    NSObject<OS_dispatch_queue> *_stateQueue;
    SUCorePersistedState *_persistedState;
}


@property (readonly, retain, nonatomic) SUCoreRollbackDescriptor *eligibleRollback;
@property (retain, nonatomic) SUCoreRollbackDescriptor *rollback; // ivar: _rollback


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)previousRollback;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadPersistedStateFile;


@end


#endif