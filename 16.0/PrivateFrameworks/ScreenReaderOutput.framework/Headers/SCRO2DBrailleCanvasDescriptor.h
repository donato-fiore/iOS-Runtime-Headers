// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCRO2DBRAILLECANVASDESCRIPTOR_H
#define SCRO2DBRAILLECANVASDESCRIPTOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCRO2DBrailleCanvasDescriptor : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger cellHeight; // ivar: _cellHeight
@property (nonatomic) NSUInteger cellWidth; // ivar: _cellWidth
@property (nonatomic) NSUInteger detentCount; // ivar: _detentCount
@property (nonatomic) BOOL hasConsistentHorizontalPinSpacing; // ivar: _hasConsistentHorizontalPinSpacing
@property (nonatomic) BOOL hasConsistentVerticalPinSpacing; // ivar: _hasConsistentVerticalPinSpacing
@property (nonatomic) NSUInteger height; // ivar: _height
@property (nonatomic) CGFloat horizontalPinSpacing; // ivar: _horizontalPinSpacing
@property (nonatomic) CGFloat interCellHorizontalSpacing; // ivar: _interCellHorizontalSpacing
@property (nonatomic) CGFloat interCellVerticalSpacing; // ivar: _interCellVerticalSpacing
@property (nonatomic) NSUInteger pinHeightStyle; // ivar: _pinHeightStyle
@property (nonatomic) BOOL skipPinBetweenCellsHorizontally; // ivar: _skipPinBetweenCellsHorizontally
@property (nonatomic) BOOL skipPinBetweenCellsVertically; // ivar: _skipPinBetweenCellsVertically
@property (nonatomic) CGFloat verticalPinSpacing; // ivar: _verticalPinSpacing
@property (nonatomic) NSUInteger width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(NSUInteger)numberOfGraphicsLinesAvailableForTextLines:(NSUInteger)arg0 ;
-(NSUInteger)numberOfTextLinesAvailable;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif