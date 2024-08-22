// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEACTIVITYPROVIDER_H
#define MUPLACEACTIVITYPROVIDER_H

@class MKMapItem;
@protocol MUPlaceActivityProviderDelegate;

#import <Foundation/Foundation.h>


@interface MUPlaceActivityProvider : NSObject

@property (weak, nonatomic) NSObject<MUPlaceActivityProviderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem


-(id)activityAnnotationView;
-(id)activityTitle;
-(id)activityURL;
-(id)initWithMapItem:(id)arg0 ;
-(id)mapMetadataSpecialization;


@end


#endif