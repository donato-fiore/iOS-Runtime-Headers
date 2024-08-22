// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARWORLDALIGNMENTDATA_H
#define ARWORLDALIGNMENTDATA_H

@class NSString;
@protocol ARResultData, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARWorldAlignmentData : NSObject <ARResultData, NSSecureCoding>

 {
    NSUInteger _modifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL referenceOriginChanged;
@property (nonatomic) BOOL sessionShouldResumeCameraPosition;
@property (nonatomic) BOOL sessionShouldResumeCameraPositionAndHeading;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger worldAlignmentModifiers;
@property (nonatomic) BOOL worldAlignmentReset;
@property (nonatomic) ? worldAlignmentTransform; // ivar: _worldAlignmentTransform


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif