// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELRADIOSTATIONEVENT_H
#define MPMODELRADIOSTATIONEVENT_H

@class NSString, NSDate;


#import "MPModelObject.h"

@interface MPModelRadioStationEvent : MPModelObject

@property (copy, nonatomic) id *artworkCatalogBlock;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSDate *endTime;
@property (copy, nonatomic) id *heroArtworkCatalogBlock;
@property (copy, nonatomic) NSDate *startTime;
@property (copy, nonatomic) NSString *title;


+(NSInteger)genericObjectType;
-(id)artworkCatalog;
-(id)heroArtworkCatalog;


@end


#endif