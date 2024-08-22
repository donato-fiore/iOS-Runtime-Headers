// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIPHOTOSACTIONPROVIDER_H
#define SEARCHUIPHOTOSACTIONPROVIDER_H

@class PHAsset;


#import "SearchUIActionProvider.h"

@interface SearchUIPhotosActionProvider : SearchUIActionProvider

@property (retain, nonatomic) PHAsset *asset; // ivar: _asset


+(BOOL)rowModelIsPhotoResult:(id)arg0 ;
-(BOOL)supportsCopy;
-(BOOL)supportsShare;
-(id)itemProvider;


@end


#endif