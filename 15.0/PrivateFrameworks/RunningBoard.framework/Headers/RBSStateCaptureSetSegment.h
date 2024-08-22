// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSSTATECAPTURESETSEGMENT_H
#define RBSSTATECAPTURESETSEGMENT_H

@class NSMutableSet, NSSet;
@protocol RBSInvalidatable;

#import <Foundation/Foundation.h>


@interface RBSStateCaptureSetSegment : NSObject {
    id<RBSInvalidatable> *_invalidatable;
    NSMutableSet *_items;
}


@property (readonly, nonatomic) NSSet *items;


-(BOOL)containsItem:(id)arg0 ;
-(NSUInteger)count;
-(id)_stateCapture;
-(id)init;
-(void)addItem:(id)arg0 withLength:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)removeItem:(id)arg0 ;


@end


#endif