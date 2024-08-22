// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKANNOTATEDMAPSNAPSHOTTER_H
#define MKANNOTATEDMAPSNAPSHOTTER_H

@class NSArray, UITraitCollection;

#import <Foundation/Foundation.h>

#import "MKMapSnapshotOptions.h"
#import "MKMapSnapshotter.h"
#import "MKMapCamera.h"

@interface MKAnnotatedMapSnapshotter : NSObject {
    NSArray *_mapItems;
    CGSize _mapSize;
    MKMapSnapshotOptions *_snapshotOptions;
    BOOL _useSnapshotService;
    MKMapSnapshotter *_snapshotter;
}


@property (readonly, nonatomic) MKMapCamera *camera;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(id)initWithMapItems:(id)arg0 mapSize:(struct CGSize )arg1 useSnapshotService:(BOOL)arg2 ;
-(void)_initSnapshotterWithMapItems;
-(void)cancel;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)startWithQueue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif