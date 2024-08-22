// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNFACEATTRIBUTECATEGORY_H
#define VNFACEATTRIBUTECATEGORY_H

@class NSArray;
@protocol VNObjectCloning, NSSecureCoding, NSCopying, VNRequestRevisionProviding;

#import <Foundation/Foundation.h>

#import "VNClassificationObservation.h"

@interface VNFaceAttributeCategory : NSObject <VNObjectCloning, NSSecureCoding, NSCopying, VNRequestRevisionProviding>



@property (copy, nonatomic) NSArray *allLabelsWithConfidences; // ivar: _allLabelsWithConfidences
@property (copy, nonatomic) VNClassificationObservation *label; // ivar: _mostLikelyLabel
@property (readonly, nonatomic) NSUInteger requestRevision; // ivar: _requestRevision


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestRevision:(NSUInteger)arg0 ;
-(id)vn_cloneObject;
-(void)_computeLabel;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif