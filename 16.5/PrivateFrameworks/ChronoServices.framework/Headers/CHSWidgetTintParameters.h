// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSWIDGETTINTPARAMETERS_H
#define CHSWIDGETTINTPARAMETERS_H

@class NSString, BSColor;
@protocol BSXPCSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface CHSWidgetTintParameters : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) BOOL accentedAlternateBackground; // ivar: _accentedAlternateBackground
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger fallbackFilterStyle; // ivar: _fallbackFilterStyle
@property (readonly, nonatomic) NSInteger filterStyle; // ivar: _filterStyle
@property (readonly, nonatomic) CGFloat fraction; // ivar: _fraction
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BSColor *primaryTintColor; // ivar: _primaryTintColor
@property (readonly, nonatomic) BSColor *secondaryTintColor; // ivar: _secondaryTintColor
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_init;
-(id)_initWithTintParameters:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithFilterStyle:(NSInteger)arg0 ;
-(id)initWithPrimaryTintColor:(id)arg0 secondaryTintColor:(id)arg1 filterStyle:(NSInteger)arg2 fallbackFilterStyle:(NSInteger)arg3 fraction:(CGFloat)arg4 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif