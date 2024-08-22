// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKUIPEARLCROSSHAIRSMANAGER_H
#define BKUIPEARLCROSSHAIRSMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface BKUIPearlCrossHairsManager : NSObject {
    vector<InstanceInfo, std::allocator<InstanceInfo>> _instanceVector;
}


@property (nonatomic) BOOL grayscale;
@property (readonly) *InstanceInfo instanceData;
@property (readonly) NSMutableArray *springInstances; // ivar: _springInstances


-(id)init;
-(void)addInstance:(id)arg0 ;
-(void)setSpringsStates:(NSUInteger)arg0 ;
-(void)setTarget;
-(void)setValue;
-(void)update:(CGFloat)arg0 ;


@end


#endif