// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKUSERLOCATIONINTERNAL_H
#define MKUSERLOCATIONINTERNAL_H

@class CLLocation, CLHeading, NSString;
@protocol MKAnnotationPrivate;

#import <Foundation/Foundation.h>


@interface MKUserLocationInternal : NSObject {
    id<MKAnnotationPrivate> *_annotation;
}


@property (readonly, nonatomic) NSObject<MKAnnotationPrivate> *annotation; // ivar: annotation
@property (nonatomic) CGFloat course; // ivar: course
@property (retain, nonatomic) CLLocation *fixedLocation; // ivar: fixedLocation
@property (retain, nonatomic) CLHeading *heading; // ivar: heading
@property (retain, nonatomic) CLLocation *predictedLocation; // ivar: predictedLocation
@property (retain, nonatomic) NSString *subtitle; // ivar: subtitle
@property (nonatomic) CGFloat timestamp; // ivar: timestamp
@property (retain, nonatomic) NSString *title; // ivar: title
@property (nonatomic, getter=isUpdating) BOOL updating; // ivar: updating




@end


#endif