// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXLABELTYPESETTER_H
#define PXLABELTYPESETTER_H

@class NSAttributedString, NSArray;
@protocol PXMutableLabelTypesetter;


#import "PXObservable.h"

@interface PXLabelTypesetter : PXObservable <PXMutableLabelTypesetter>



@property (nonatomic) BOOL adjustsFontSizeToFitWidth; // ivar: _adjustsFontSizeToFitWidth
@property (nonatomic) BOOL allowTruncation; // ivar: _allowTruncation
@property (copy, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) *CGContext context; // ivar: _context
@property (readonly, nonatomic) NSArray *lines; // ivar: _lines
@property (nonatomic) NSUInteger maximumNumberOfLines; // ivar: _maximumNumberOfLines
@property (nonatomic) CGFloat minimumScaleFactor; // ivar: _minimumScaleFactor
@property (nonatomic) CGFloat minimumTruncatedScaleFactor; // ivar: _minimumTruncatedScaleFactor
@property (nonatomic) NSInteger typesettingMode; // ivar: _typesettingMode


-(BOOL)_allowTextOverlapForFont:(id)arg0 ;
-(NSUInteger)_adjustCutoffLocation:(NSUInteger)arg0 forLineStartingAtIndex:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithContext:(struct CGContext *)arg0 ;
-(id)mutableChangeObject;
-(void)_updateLines;
-(void)didPerformChanges;
-(void)performChanges:(id)arg0 ;
-(void)shiftLinesVerticallyToAvoidOverlap:(id)arg0 referenceFont:(id)arg1 ;


@end


#endif