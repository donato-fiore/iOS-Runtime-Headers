// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARWORLDTRACKINGREFERENCEANCHORDATA_H
#define ARWORLDTRACKINGREFERENCEANCHORDATA_H

@class NSSet, NSString;
@protocol ARResultData, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARWorldTrackingReferenceAnchorData : NSObject <ARResultData, NSSecureCoding>



@property (readonly, nonatomic) NSSet *addedAnchors; // ivar: _addedAnchors
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *externalAnchors; // ivar: _externalAnchors
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *receivedAnchors; // ivar: _receivedAnchors
@property (readonly, nonatomic) NSSet *removedAnchors; // ivar: _removedAnchors
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSSet *updatedAnchors; // ivar: _updatedAnchors


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)anchorsForCameraWithTransform:(struct ? )arg0 referenceOriginTransform:(struct ? )arg1 existingAnchors:(id)arg2 anchorsToRemove:(id)arg3 ;
-(id)externalAnchorsWithReferenceOriginTransform:(struct ? )arg0 existingAnchors:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUpdatedAnchors:(id)arg0 addedAnchors:(id)arg1 removedAnchors:(id)arg2 externalAnchors:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif