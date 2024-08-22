// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKLOOKAROUNDSNAPSHOTTER_H
#define MKLOOKAROUNDSNAPSHOTTER_H


#import <Foundation/Foundation.h>

#import "MKMapSnapshotter.h"

@interface MKLookAroundSnapshotter : NSObject {
    MKMapSnapshotter *_snapshotter;
}


@property (readonly, nonatomic, getter=isLoading) BOOL loading;


-(id)initWithScene:(id)arg0 options:(id)arg1 ;
-(void)cancel;
-(void)getSnapshotWithCompletionHandler:(id)arg0 ;


@end


#endif