// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKMAPSNAPSHOTREQUEST_H
#define MKMAPSNAPSHOTREQUEST_H

@class VKMapSnapshotCreator, NSString, UIImage;

#import <Foundation/Foundation.h>

#import "MKMapSnapshotCreator.h"

@interface MKMapSnapshotRequest : NSObject {
    VKMapSnapshotCreator *_snapshotCreator;
}


@property (retain, nonatomic) NSString *attributionString; // ivar: _attributionString
@property (retain, nonatomic) id *context; // ivar: _context
@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (weak, nonatomic) MKMapSnapshotCreator *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) id *requester; // ivar: _requester
@property (nonatomic) CGSize size; // ivar: _size
@property (nonatomic) NSUInteger zoomLevel; // ivar: _zoomLevel


-(id)description;
-(void)cancel;
-(void)start;


@end


#endif