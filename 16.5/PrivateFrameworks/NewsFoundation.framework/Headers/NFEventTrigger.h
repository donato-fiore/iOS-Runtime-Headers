// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFEVENTTRIGGER_H
#define NFEVENTTRIGGER_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface NFEventTrigger : NSObject

@property (readonly, nonatomic) id *block; // ivar: _block
@property (readonly, copy, nonatomic) NSSet *events; // ivar: _events
@property (readonly, nonatomic) BOOL fireOnAny; // ivar: _fireOnAny
@property (readonly, nonatomic) BOOL fireOnce; // ivar: _fireOnce
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key


-(id)initWithKey:(id)arg0 fireOnce:(BOOL)arg1 fireOnAny:(BOOL)arg2 events:(id)arg3 block:(id)arg4 ;


@end


#endif