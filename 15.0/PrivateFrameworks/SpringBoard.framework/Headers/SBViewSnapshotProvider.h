// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBVIEWSNAPSHOTPROVIDER_H
#define SBVIEWSNAPSHOTPROVIDER_H

@class UIView;

#import <Foundation/Foundation.h>


@interface SBViewSnapshotProvider : NSObject {
    UIView *_view;
    NSInteger _orientation;
}


@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock


-(id)initWithView:(id)arg0 orientation:(NSInteger)arg1 ;
-(id)snapshot;
-(void)snapshotAsynchronously:(BOOL)arg0 withImageBlock:(id)arg1 ;
-(void)snapshotWithImageBlock:(id)arg0 ;


@end


#endif