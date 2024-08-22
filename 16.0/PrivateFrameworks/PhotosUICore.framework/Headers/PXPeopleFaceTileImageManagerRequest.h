// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEFACETILEIMAGEMANAGERREQUEST_H
#define PXPEOPLEFACETILEIMAGEMANAGERREQUEST_H

@class PHAsset, PHFace, PHPerson;

#import <Foundation/Foundation.h>


@interface PXPeopleFaceTileImageManagerRequest : NSObject

@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (nonatomic) NSInteger deliveryMode; // ivar: _deliveryMode
@property (retain, nonatomic) PHFace *face; // ivar: _face
@property (readonly, nonatomic) PHPerson *person; // ivar: _person
@property (nonatomic) BOOL synchronous; // ivar: _synchronous


-(id)description;
-(id)initWithFaceTile:(id)arg0 ;
-(id)initWithPerson:(id)arg0 ;
-(id)initWithPerson:(id)arg0 face:(id)arg1 asset:(id)arg2 ;


@end


#endif