// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARPLANEANCHOR_H
#define ARPLANEANCHOR_H

@class NSString, NSDictionary;
@protocol NSObject;


#import "ARAnchor.h"
#import "ARPlaneGeometry.h"
#import "ARPatchGrid.h"

@interface ARPlaneAnchor : ARAnchor <NSObject>

 {
    ? _center;
    ? _extent;
}


@property (readonly, nonatomic) NSInteger alignment; // ivar: _alignment
@property ? center;
@property (nonatomic) NSInteger classification; // ivar: _classification
@property (retain, nonatomic) NSString *classificationLabel; // ivar: _classificationLabel
@property (nonatomic) NSInteger classificationStatus; // ivar: _classificationStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property ? extent;
@property (retain) ARPlaneGeometry *geometry; // ivar: _geometry
@property (retain, nonatomic) ARPatchGrid *gridExtent; // ivar: _gridExtent
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *possibleClassifications; // ivar: _possibleClassifications
@property (readonly) Class superclass;
@property (nonatomic) float uncertaintyAlongNormal; // ivar: _uncertaintyAlongNormal
@property (nonatomic) NSInteger worldAlignmentRotation; // ivar: _worldAlignmentRotation


-(id)_description:(BOOL)arg0 ;
-(id)_hitTestFromOrigin:(BOOL)arg0 withDirection:(BOOL)arg1 usingExtentusingGeometry;
-(id)initWithAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 transform:(struct ? )arg1 alignment:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif