// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DUIVISIBLEDROPPEDITEM_H
#define _DUIVISIBLEDROPPEDITEM_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_DUIImageComponent.h"
#import "_DUIPreview.h"

@interface _DUIVisibleDroppedItem : NSObject <NSSecureCoding>

 {
    CGPoint _center;
}


@property (nonatomic) CGPoint center;
@property (nonatomic) BOOL constrainSize; // ivar: _constrainSize
@property (nonatomic) BOOL flipped; // ivar: _flipped
@property (retain, nonatomic) _DUIImageComponent *imageComponent; // ivar: _imageComponent
@property (nonatomic) NSUInteger itemIndex; // ivar: _itemIndex
@property (nonatomic) BOOL precisionMode; // ivar: _precisionMode
@property (copy, nonatomic) _DUIPreview *preview; // ivar: _preview
@property (nonatomic) CGFloat rotation; // ivar: _rotation
@property (nonatomic) CGVector targetVelocity; // ivar: _targetVelocity
@property (nonatomic) CGVector velocity; // ivar: _velocity


+(BOOL)supportsSecureCoding;
-(id)createSnapshotView;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif