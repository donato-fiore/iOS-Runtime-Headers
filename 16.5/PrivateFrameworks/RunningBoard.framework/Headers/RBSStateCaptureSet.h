// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSSTATECAPTURESET_H
#define RBSSTATECAPTURESET_H

@class NSMutableSet, NSSet;
@protocol RBSInvalidatable;

#import <Foundation/Foundation.h>


@interface RBSStateCaptureSet : NSObject {
    id<RBSInvalidatable> *_invalidatable;
    NSMutableSet *_stateCaptureSegments;
}


@property (readonly, copy, nonatomic) NSSet *itemsCopy;


-(id)init;
-(void)addItem:(id)arg0 ;
-(void)removeItem:(id)arg0 ;


@end


#endif