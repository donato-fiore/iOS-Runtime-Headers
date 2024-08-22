// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKMAPITEMMETADATAIMAGEREQUEST_H
#define MKMAPITEMMETADATAIMAGEREQUEST_H

@class GEOPhotoInfo;


#import "MKMapItemMetadataRequest.h"

@interface MKMapItemMetadataImageRequest : MKMapItemMetadataRequest

@property (copy, nonatomic) id *imageHandler; // ivar: _imageHandler
@property (retain, nonatomic) GEOPhotoInfo *info; // ivar: _info


+(id)requestWithMapItem:(id)arg0 info:(id)arg1 ;
-(id)url;
-(void)handleData:(id)arg0 ;
-(void)handleError:(id)arg0 ;


@end


#endif