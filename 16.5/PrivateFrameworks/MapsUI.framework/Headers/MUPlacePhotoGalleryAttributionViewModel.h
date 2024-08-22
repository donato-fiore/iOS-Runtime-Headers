// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEPHOTOGALLERYATTRIBUTIONVIEWMODEL_H
#define MUPLACEPHOTOGALLERYATTRIBUTIONVIEWMODEL_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface MUPlacePhotoGalleryAttributionViewModel : NSObject

@property (nonatomic) NSInteger accessoryStyle; // ivar: _accessoryStyle
@property (nonatomic) NSInteger attributionType; // ivar: _attributionType
@property (retain, nonatomic) NSString *authorName; // ivar: _authorName
@property (retain, nonatomic) NSString *caption; // ivar: _caption
@property (retain, nonatomic) NSDate *photoDate; // ivar: _photoDate
@property (retain, nonatomic) NSString *placeName; // ivar: _placeName
@property (retain, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (nonatomic) BOOL supportsPunchOut; // ivar: _supportsPunchOut
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText
@property (retain, nonatomic) NSString *vendorName; // ivar: _vendorName


+(id)viewModelForCustomTitle:(id)arg0 customSubtitle:(id)arg1 ;
+(id)viewModelFromMapItem:(id)arg0 photo:(id)arg1 photoCreditName:(id)arg2 shouldAddPhotoCredit:(BOOL)arg3 ;


@end


#endif