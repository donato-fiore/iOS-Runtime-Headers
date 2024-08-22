// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKMAPSNAPSHOTVIEW_H
#define MKMAPSNAPSHOTVIEW_H

@class UIImageView;


#import "MKMapSnapshotter.h"

@interface MKMapSnapshotView : UIImageView {
    MKMapSnapshotter *_snapshotter;
    MKMapSnapshotter *_gridSnapshotter;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)cancel;
-(void)takeSnapshotWithOptions:(id)arg0 gridOptions:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif