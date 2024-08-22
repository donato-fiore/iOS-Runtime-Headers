// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFMESSAGEBATCHER_H
#define HFMESSAGEBATCHER_H

@class NSString, NSMutableSet, NSSet;
@protocol NACancelable;

#import <Foundation/Foundation.h>


@interface HFMessageBatcher : NSObject {
    NSUInteger signpostID;
}


@property (readonly, nonatomic) CGFloat batchingInterval; // ivar: _batchingInterval
@property (copy, nonatomic) id *block; // ivar: _block
@property (retain, nonatomic) NSObject<NACancelable> *cancelable; // ivar: _cancelable
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableSet *mutableObjects; // ivar: _mutableObjects
@property (readonly, nonatomic) NSSet *objects;


-(id)initWithIdentifier:(id)arg0 batchingInterval:(CGFloat)arg1 block:(id)arg2 ;
-(void)batchObject:(id)arg0 ;
-(void)reset;


@end


#endif