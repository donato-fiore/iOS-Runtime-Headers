// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARAPPCLIPCODERESULTDATA_H
#define ARAPPCLIPCODERESULTDATA_H

@class NSString, NSDictionary;
@protocol ARResultData;

#import <Foundation/Foundation.h>


@interface ARAppClipCodeResultData : NSObject <ARResultData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *trackedAppClipCodes; // ivar: _trackedAppClipCodes


-(BOOL)isEqual:(id)arg0 ;
-(id)anchorsForCameraWithTransform:(struct ? )arg0 referenceOriginTransform:(struct ? )arg1 existingAnchors:(id)arg2 anchorsToRemove:(id)arg3 ;


@end


#endif