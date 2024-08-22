// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONVIEWSNAPSHOTPROVIDER_H
#define SBICONVIEWSNAPSHOTPROVIDER_H

@class NSString, UIView;
@protocol SBIconViewSnapshotProviding;

#import <Foundation/Foundation.h>


@interface SBIconViewSnapshotProvider : NSObject <SBIconViewSnapshotProviding>

 {
    id *_invalidationBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *snapshotView; // ivar: _snapshotView
@property (readonly) Class superclass;


-(id)initWithSnapshotView:(id)arg0 invalidation:(id)arg1 ;
-(void)invalidate;


@end


#endif