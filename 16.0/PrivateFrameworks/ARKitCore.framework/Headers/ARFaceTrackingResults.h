// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARFACETRACKINGRESULTS_H
#define ARFACETRACKINGRESULTS_H

@class NSString, NSArray;
@protocol ARResultData, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARFaceTrackingResults : NSObject <ARResultData, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *trackedFaces; // ivar: _trackedFaces


+(BOOL)supportsSecureCoding;
-(id)anchorsForCameraWithTransform:(struct ? )arg0 referenceOriginTransform:(struct ? )arg1 existingAnchors:(id)arg2 anchorsToRemove:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif