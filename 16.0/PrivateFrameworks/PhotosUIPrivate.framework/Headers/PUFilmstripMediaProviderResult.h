// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUFILMSTRIPMEDIAPROVIDERRESULT_H
#define PUFILMSTRIPMEDIAPROVIDERRESULT_H

@class UIImage, NSDictionary;

#import <Foundation/Foundation.h>

#import "PUFilmstripAsset.h"

@interface PUFilmstripMediaProviderResult : NSObject

@property (nonatomic) ? actualTime; // ivar: _actualTime
@property (retain, nonatomic) PUFilmstripAsset *asset; // ivar: _asset
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL isReadyForDelivery; // ivar: _isReadyForDelivery
@property (nonatomic) NSInteger requestNumber; // ivar: _requestNumber
@property (retain, nonatomic) NSDictionary *resultInfo; // ivar: _resultInfo
@property (nonatomic) CGSize targetSize; // ivar: _targetSize


-(NSInteger)compare:(id)arg0 ;


@end


#endif