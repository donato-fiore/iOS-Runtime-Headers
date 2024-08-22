// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLEFACETILE_H
#define PXPEOPLEFACETILE_H

@class PHAsset, PHFace, PHPerson;

#import <Foundation/Foundation.h>


@interface PXPeopleFaceTile : NSObject

@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) PHFace *face; // ivar: _face
@property (readonly) BOOL isUserDefined;
@property (readonly, nonatomic) PHPerson *person; // ivar: _person


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithFace:(id)arg0 asset:(id)arg1 person:(id)arg2 ;


@end


#endif