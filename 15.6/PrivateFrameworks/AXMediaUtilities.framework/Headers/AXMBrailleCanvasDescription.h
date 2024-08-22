// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMBRAILLECANVASDESCRIPTION_H
#define AXMBRAILLECANVASDESCRIPTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXMBrailleCanvasDescription : NSObject <NSSecureCoding>



@property (nonatomic) BOOL hasConsistentHorizontalPinSpacing; // ivar: _hasConsistentHorizontalPinSpacing
@property (nonatomic) BOOL hasConsistentVerticalPinSpacing; // ivar: _hasConsistentVerticalPinSpacing
@property (readonly) NSUInteger height; // ivar: _height
@property (nonatomic) CGFloat horizontalPinSpacing; // ivar: _horizontalPinSpacing
@property (nonatomic) CGFloat interCellHorizontalSpacing; // ivar: _interCellHorizontalSpacing
@property (nonatomic) CGFloat interCellVerticalSpacing; // ivar: _interCellVerticalSpacing
@property (readonly) NSUInteger numberOfDiscretePinHeights; // ivar: _numberOfDiscretePinHeights
@property (nonatomic) CGFloat verticalPinSpacing; // ivar: _verticalPinSpacing
@property (readonly) NSUInteger width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHeight:(NSUInteger)arg0 width:(NSUInteger)arg1 numberOfDiscretePinHeights:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif