// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUCOORDINATEVIEWMODEL_H
#define MUCOORDINATEVIEWMODEL_H

@class MKMapItem, NSString;
@protocol MUFactoidViewModel;


#import "MUFactoidViewModel.h"

@interface MUCoordinateViewModel : MUFactoidViewModel <MUFactoidViewModel>

 {
    MKMapItem *_mapItem;
    BOOL _isUserLocation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) NSString *valueString;


-(id)initWithMapItem:(id)arg0 isUserLocation:(BOOL)arg1 ;


@end


#endif