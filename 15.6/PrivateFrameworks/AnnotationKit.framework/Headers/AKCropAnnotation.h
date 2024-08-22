// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKCROPANNOTATION_H
#define AKCROPANNOTATION_H

@class NSString;
@protocol AKRectangularAnnotationProtocol;


#import "AKAnnotation.h"

@interface AKCropAnnotation : AKAnnotation <AKRectangularAnnotationProtocol>



@property (nonatomic) *CGColor color; // ivar: _color
@property BOOL cropApplied; // ivar: _cropApplied
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL hidden; // ivar: _hidden
@property CGRect rectangle; // ivar: _rectangle
@property BOOL showHandles; // ivar: _showHandles
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg0 ;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)keyPathsForValuesAffectingHitTestBounds;
-(id)displayName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)keysForValuesToObserveForAdornments;
-(id)keysForValuesToObserveForRedrawing;
-(id)keysForValuesToObserveForUndo;
-(struct CGRect )hitTestBounds;
-(void)adjustModelToCompensateForOriginalExif;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flattenModelExifOrientation:(NSInteger)arg0 withModelSize:(struct CGSize )arg1 ;
-(void)translateBy:(struct CGPoint )arg0 ;


@end


#endif