// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPLINKSNAPSHOTCONFIGURATION_H
#define LPLINKSNAPSHOTCONFIGURATION_H

@class UITraitCollection;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LPLinkSnapshotConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGSize maximumSize; // ivar: _maximumSize
@property (readonly, nonatomic) NSUInteger preferredSizeClass; // ivar: _preferredSizeClass
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTraitCollection:(id)arg0 preferredSizeClass:(NSUInteger)arg1 maximumSize:(struct CGSize )arg2 scale:(CGFloat)arg3 ;
-(id)initWithTraitCollection:(id)arg0 preferredSizeClass:(NSUInteger)arg1 size:(struct CGSize )arg2 scale:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif