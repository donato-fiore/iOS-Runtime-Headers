// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACEACTIVITYPROVIDER_H
#define MKPLACEACTIVITYPROVIDER_H

@protocol MKPlaceActivityProviderDelegate;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface MKPlaceActivityProvider : NSObject

@property (weak, nonatomic) NSObject<MKPlaceActivityProviderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem


-(id)activityAnnotationView;
-(id)activityTitle;
-(id)activityURL;
-(id)initWithMapItem:(id)arg0 ;
-(id)mapMetadataSpecialization;


@end


#endif