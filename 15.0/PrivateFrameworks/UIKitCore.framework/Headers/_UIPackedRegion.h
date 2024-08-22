// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPACKEDREGION_H
#define _UIPACKEDREGION_H

@class NSArray, NSString;
@protocol _UIHyperregion_Internal, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _UIPackedRegion : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger _dimensions; // ivar: __dimensions
@property (copy, nonatomic, setter=_setRegions:) NSArray *_regions; // ivar: __regions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(BOOL)_isBoundaryCrossedFromPoint:(*CGFloat)arg0 toPoint:(*CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDimensions:(NSUInteger)arg0 ;
-(void)_closestPoint:(*CGFloat)arg0 toPoint:(*CGFloat)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif