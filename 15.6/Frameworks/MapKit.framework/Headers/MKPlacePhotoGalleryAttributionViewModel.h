// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACEPHOTOGALLERYATTRIBUTIONVIEWMODEL_H
#define MKPLACEPHOTOGALLERYATTRIBUTIONVIEWMODEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MKPlacePhotoGalleryAttributionViewModel : NSObject

@property (nonatomic) NSInteger accessoryStyle; // ivar: _accessoryStyle
@property (retain, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText


+(id)viewModelFromMapItem:(id)arg0 photo:(id)arg1 ;


@end


#endif