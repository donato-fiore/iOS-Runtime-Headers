// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMATCHINGCOMMONLOCATION_H
#define PGMATCHINGCOMMONLOCATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PGMatchingCommonLocation : NSObject {
    CGFloat _distance;
}


@property (nonatomic) CLLocationCoordinate2D addressCoordinate; // ivar: _addressCoordinate
@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (retain, nonatomic) NSString *label; // ivar: _label


+(id)matchingCommonLocationWithLabel:(id)arg0 coordinate:(struct CLLocationCoordinate2D )arg1 forAddressCoordinate:(struct CLLocationCoordinate2D )arg2 ;
-(CGFloat)distanceBetweenCoordinates;


@end


#endif