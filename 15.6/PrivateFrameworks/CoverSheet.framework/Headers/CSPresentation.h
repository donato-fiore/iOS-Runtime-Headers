// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSPRESENTATION_H
#define CSPRESENTATION_H

@class NSString, NSArray;
@protocol CSPresentationProviding, UICoordinateSpace, NSCopying;

#import <Foundation/Foundation.h>


@interface CSPresentation : NSObject <CSPresentationProviding, UICoordinateSpace, NSCopying>



@property (readonly, nonatomic) CGRect bounds;
@property (weak, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace; // ivar: _coordinateSpace
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, weak, nonatomic) NSObject<UICoordinateSpace> *presentationCoordinateSpace;
@property (readonly, copy, nonatomic) NSArray *presentationRegions;
@property (readonly, copy, nonatomic) NSArray *regions; // ivar: _regions
@property (readonly) Class superclass;


+(id)presentation;
+(id)presentationForProvider:(id)arg0 ;
+(id)presentationWithCoordinateSpace:(id)arg0 ;
-(BOOL)intersectsCoordinateSpace:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)firstRegionIntersectingCoordinateSpace:(id)arg0 ;
-(id)firstRegionIntersectingCoordinateSpace:(id)arg0 excludingRegionsWithRole:(NSInteger)arg1 ;
-(id)init;
-(id)presentationForRole:(NSInteger)arg0 ;
-(id)regionsIntersectingCoordinateSpace:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toCoordinateSpace:(id)arg1 ;
-(struct UIEdgeInsets )suggestedInsetsForPreferredContentFrame:(struct CGRect )arg0 ;
-(void)addRegion:(id)arg0 ;
-(void)addRegions:(id)arg0 ;
-(void)reset;
-(void)unionPresentation:(id)arg0 ;


@end


#endif