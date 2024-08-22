// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKCLUSTERANNOTATION_H
#define MKCLUSTERANNOTATION_H

@class NSString, NSArray;
@protocol MKAnnotation;

#import <Foundation/Foundation.h>


@interface MKClusterAnnotation : NSObject <MKAnnotation>

 {
    ? _flags;
}


@property (copy, nonatomic) NSString *clusteringIdentifier; // ivar: _clusteringIdentifier
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate; // ivar: __coordinate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *memberAnnotations; // ivar: _memberAnnotations
@property (copy, nonatomic) NSString *subtitle; // ivar: __subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: __title


-(BOOL)_isMKClusterAnnotation;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithMemberAnnotations:(id)arg0 ;
-(struct CLLocationCoordinate2D )_averageCoordinate;
-(void)_memberAnnotationCoordinateDidChange;


@end


#endif