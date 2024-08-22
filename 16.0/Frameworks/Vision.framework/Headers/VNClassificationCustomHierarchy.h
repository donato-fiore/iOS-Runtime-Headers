// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCLASSIFICATIONCUSTOMHIERARCHY_H
#define VNCLASSIFICATIONCUSTOMHIERARCHY_H

@class NSDictionary, NSString;
@protocol VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNRequestSpecifying;

#import <Foundation/Foundation.h>

#import "VNRequestSpecifier.h"

@interface VNClassificationCustomHierarchy : NSObject <VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNRequestSpecifying>

 {
    ? _hierarchicalModel_DO_NOT_ACCESS_DIRECTLY;
    NSDictionary *_additionalRelationships;
    VNRequestSpecifier *_originatingRequestSpecifier;
    NSUInteger _originatingRequestDetectionLevel;
}


@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly, copy, nonatomic) NSDictionary *relationships;
@property (readonly, copy) NSString *requestClassName;
@property (readonly, nonatomic) NSUInteger requestRevision;


+(BOOL)supportsSecureCoding;
+(id)customHierarchyForRequest:(id)arg0 error:(*id)arg1 ;
-(?)hierarchicalModelAndReturnError;
-(?)newHierarchicalModelAndReturnError;
-(BOOL)_addRelationships:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)requestClassAndReturnError:(*id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)requestDetectionLevel;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customHierarchyWithAdditionalParent:(id)arg0 children:(id)arg1 error:(*id)arg2 ;
-(id)customHierarchyWithAdditionalRelationships:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 detectionLevel:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif