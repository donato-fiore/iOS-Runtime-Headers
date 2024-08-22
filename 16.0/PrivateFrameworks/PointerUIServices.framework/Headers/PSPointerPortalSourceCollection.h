// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSPOINTERPORTALSOURCECOLLECTION_H
#define PSPOINTERPORTALSOURCECOLLECTION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PSPortalSource.h"
#import "PSMatchMoveSource.h"

@interface PSPointerPortalSourceCollection : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) PSPortalSource *overlayEffectPortalSource; // ivar: _overlayEffectPortalSource
@property (readonly, copy, nonatomic) PSPortalSource *pointerPortalSource; // ivar: _pointerPortalSource
@property (readonly, copy, nonatomic) PSMatchMoveSource *samplingMatchMoveSource; // ivar: _samplingMatchMoveSource
@property (nonatomic) BOOL shouldBeInvalidatedIfPointerLeavesDisplay; // ivar: _shouldBeInvalidatedIfPointerLeavesDisplay
@property (readonly, nonatomic) unsigned int sourceContextID;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPointerPortalSource:(id)arg0 overlayEffectPortalSource:(id)arg1 samplingMatchMoveSource:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif