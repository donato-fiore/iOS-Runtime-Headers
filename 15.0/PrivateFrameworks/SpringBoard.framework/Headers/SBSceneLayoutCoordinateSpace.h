// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCENELAYOUTCOORDINATESPACE_H
#define SBSCENELAYOUTCOORDINATESPACE_H

@class NSString;
@protocol BSDescriptionProviding, UICoordinateSpace;

#import <Foundation/Foundation.h>


@interface SBSceneLayoutCoordinateSpace : NSObject <BSDescriptionProviding, UICoordinateSpace>

 {
    id<UICoordinateSpace> *_parentCoordinateSpace;
}


@property (readonly, nonatomic) CGRect bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)coordinateSpaceForFrame:(struct CGRect )arg0 withinCoordinateSpace:(id)arg1 ;
+(id)coordinateSpaceForInterfaceOrientation:(NSInteger)arg0 withReferenceCoordinateSpace:(id)arg1 inOrientation:(NSInteger)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithParentCoordinateSpace:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toCoordinateSpace:(id)arg1 ;


@end


#endif