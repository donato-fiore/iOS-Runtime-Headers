// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUREUSEQUEUE_H
#define PUREUSEQUEUE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PUReuseQueue : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_objectCreationBlocksByReuseIdentifier; // ivar: __objectCreationBlocksByReuseIdentifier
@property (readonly, nonatomic) NSMutableDictionary *_reusableObjectsByReuseIdentifier; // ivar: __reusableObjectsByReuseIdentifier
@property (nonatomic, getter=isReuseEnabled) BOOL reuseEnabled; // ivar: _reuseEnabled


-(id)dequeueObjectWithReuseIdentifier:(id)arg0 isReused:(*BOOL)arg1 ;
-(id)init;
-(void)enqueueObjectForReuse:(id)arg0 withReuseIdentifier:(id)arg1 ;
// -(void)registerObjectCreationBlock:(id)arg0 withReuseIdentifier:(unk)arg1  ;


@end


#endif