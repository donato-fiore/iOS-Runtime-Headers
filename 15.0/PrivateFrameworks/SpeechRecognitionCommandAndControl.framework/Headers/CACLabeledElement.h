// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACLABELEDELEMENT_H
#define CACLABELEDELEMENT_H

@class NSString, AXElement, NSArray;
@protocol CACVoiceOverDescribable, CACLabeledGridOverlayViewElement, AXElementNamesItem, CACNumberedElement;

#import <Foundation/Foundation.h>

#import "CACTextMarkerRange.h"

@interface CACLabeledElement : NSObject <CACVoiceOverDescribable, CACLabeledGridOverlayViewElement, AXElementNamesItem, CACNumberedElement>



@property (nonatomic) NSInteger arrowOrientation;
@property (nonatomic) NSInteger arrowOrientation; // ivar: _arrowOrientation
@property (retain, nonatomic) NSString *axIdentifier; // ivar: _axIdentifier
@property (nonatomic) NSInteger badgePresentation;
@property (nonatomic) NSInteger badgePresentation; // ivar: _badgePresentation
@property (retain, nonatomic) AXElement *element; // ivar: _element
@property (readonly, nonatomic) CGRect elementFrame;
@property (readonly, nonatomic) CGSize elementLabelContainerSize;
@property (readonly, nonatomic) NSString *elementName;
@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) NSString *fullLabel;
@property (readonly, nonatomic) NSString *fullLabel;
@property (nonatomic) BOOL hasBeenCollected; // ivar: _hasBeenCollected
@property (readonly, nonatomic) CGRect interfaceOrientedRectangle;
@property (readonly, nonatomic) CGRect interfaceOrientedRectangle;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *label;
@property (nonatomic) CGRect labelRectangle;
@property (nonatomic) CGRect labelRectangle; // ivar: _labelRectangle
@property (readonly, nonatomic) NSString *numberedLabel;
@property (retain, nonatomic) NSString *numberedLabel;
@property (retain, nonatomic) NSString *numberedLabel; // ivar: _numberedLabel
@property (readonly, nonatomic) NSString *recognitionLabel;
@property (readonly, nonatomic) NSString *recognitionLabel;
@property (retain, nonatomic) NSArray *recognitionStrings; // ivar: _recognitionStrings
@property (readonly, nonatomic) CGRect rectangle;
@property (nonatomic) CGRect rectangle; // ivar: _rectangle
@property (retain, nonatomic) CACTextMarkerRange *textMarkerRange; // ivar: _textMarkerRange
@property (readonly, nonatomic) NSUInteger traits;
@property (readonly, nonatomic) NSUInteger traits;
@property (readonly, nonatomic) NSString *unfilteredRecognitionLabel;
@property (readonly, nonatomic) NSString *unfilteredRecognitionLabel;
@property (readonly, nonatomic) NSString *valueLabel;
@property (readonly, nonatomic) NSString *valueLabel;


-(NSInteger)quantizedPositionCompare:(id)arg0 ;
-(id)description;
-(id)initWithElement:(id)arg0 recognitionStrings:(id)arg1 rectangle:(struct CGRect )arg2 ;
-(struct CGPoint )quantizedPosition;


@end


#endif