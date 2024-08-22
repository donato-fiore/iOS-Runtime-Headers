// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMDISPLAY_H
#define AXMDISPLAY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AXMDisplay : NSObject <NSCopying>



@property (nonatomic) NSInteger backingType; // ivar: _backingType
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat orientation; // ivar: _orientation
@property (nonatomic) NSInteger physicalOrientation; // ivar: _physicalOrientation
@property (nonatomic) CGRect referenceBounds; // ivar: _referenceBounds
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGSize size; // ivar: _size
@property (nonatomic) BOOL supportsDeepColor; // ivar: _supportsDeepColor


-(id)_initWithBackingType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(struct CGPoint )convertPointToDisplay:(struct CGPoint )arg0 ;
-(struct CGRect )convertRectToDisplay:(struct CGRect )arg0 ;


@end


#endif