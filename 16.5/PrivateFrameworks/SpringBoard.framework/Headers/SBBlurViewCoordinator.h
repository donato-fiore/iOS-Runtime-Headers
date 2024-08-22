// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBLURVIEWCOORDINATOR_H
#define SBBLURVIEWCOORDINATOR_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface SBBlurViewCoordinator : NSObject {
    NSMutableDictionary *_mapStateToBlocks;
}


@property (readonly, nonatomic, getter=isBlurred) BOOL blurred;
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NSArray *viewControllers; // ivar: _elementVCs


-(id)description;
-(id)init;
-(id)initWithElementViewControllers:(id)arg0 ;
-(void)_fireBlocksForState:(NSUInteger)arg0 ;
// -(void)addNotifyBlock:(id)arg0 forState:(unk)arg1  ;
// -(void)removeNotifyBlock:(id)arg0 forState:(unk)arg1  ;


@end


#endif