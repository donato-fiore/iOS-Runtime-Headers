// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLREFERENCE_H
#define TMLREFERENCE_H

@class NSString;
@protocol TMLValue;

#import <Foundation/Foundation.h>


@interface TMLReference : NSObject <TMLValue>

 {
    id *_target;
    id *_block;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)referenceForTarget:(id)arg0 ;
+(id)referenceWithBlock:(id)arg0 ;
-(NSUInteger)valueType;
-(id)initWithTarget:(id)arg0 block:(id)arg1 ;
-(id)value;


@end


#endif