// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKPOPUPANNOTATION_H
#define AKPOPUPANNOTATION_H

@class NSString;
@protocol AKRectangularAnnotationProtocol, AKChildAnnotationProtocol;


#import "AKAnnotation.h"

@interface AKPopupAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKChildAnnotationProtocol>



@property (copy) NSString *contents; // ivar: _contents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property CGRect openRectangle; // ivar: _openRectangle
@property (weak) AKAnnotation *parentAnnotation; // ivar: _parentAnnotation
@property CGRect rectangle; // ivar: _rectangle
@property (readonly) Class superclass;
@property NSInteger visualStyle; // ivar: _visualStyle


+(BOOL)supportsSecureCoding;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg0 ;
+(id)keyPathsForValuesAffectingHitTestBounds;
-(id)displayName;
-(id)initWithCoder:(id)arg0 ;
-(id)keysForValuesToObserveForAdornments;
-(id)keysForValuesToObserveForUndo;
-(struct CGRect )hitTestBounds;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flattenModelExifOrientation:(NSInteger)arg0 withModelSize:(struct CGSize )arg1 ;
-(void)translateBy:(struct CGPoint )arg0 ;


@end


#endif