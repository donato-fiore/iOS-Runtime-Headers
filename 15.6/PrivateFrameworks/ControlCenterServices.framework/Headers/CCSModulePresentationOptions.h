// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCSMODULEPRESENTATIONOPTIONS_H
#define CCSMODULEPRESENTATIONOPTIONS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CCSModulePresentationOptions : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL animateDismissal; // ivar: _animateDismissal
@property (readonly, nonatomic) BOOL animatePresentation; // ivar: _animatePresentation
@property (readonly, nonatomic) BOOL blurBackground; // ivar: _blurBackground


+(BOOL)supportsSecureCoding;
+(id)defaultExpandedOptions;
+(id)defaultOptions;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBlurBackground:(BOOL)arg0 animatePresentation:(BOOL)arg1 animateDismissal:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif