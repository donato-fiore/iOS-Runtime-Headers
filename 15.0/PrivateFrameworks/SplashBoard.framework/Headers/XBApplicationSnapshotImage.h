// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef XBAPPLICATIONSNAPSHOTIMAGE_H
#define XBAPPLICATIONSNAPSHOTIMAGE_H

@class UIImage;


#import "XBApplicationSnapshot.h"

@interface XBApplicationSnapshotImage : UIImage {
    XBApplicationSnapshot *_snapshot;
}


@property (readonly, nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation


-(id)description;
-(id)initWithSnapshot:(id)arg0 interfaceOrientation:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif