// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKUSERLOCATIONANNOTATION_H
#define MKUSERLOCATIONANNOTATION_H

@class NSString, CLLocation;
@protocol MKAnnotationPrivate;

#import <Foundation/Foundation.h>


@interface MKUserLocationAnnotation : NSObject <MKAnnotationPrivate>



@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSInteger representation;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;




@end


#endif