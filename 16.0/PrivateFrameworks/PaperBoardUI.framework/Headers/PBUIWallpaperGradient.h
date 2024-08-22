// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIWALLPAPERGRADIENT_H
#define PBUIWALLPAPERGRADIENT_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface PBUIWallpaperGradient : NSObject <NSCopying, NSSecureCoding, BSDescriptionProviding>



@property (copy, nonatomic) NSArray *colors; // ivar: _colors
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGPoint endPoint; // ivar: _endPoint
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *locations; // ivar: _locations
@property (nonatomic) CGPoint startPoint; // ivar: _startPoint
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)cgColors;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGGradient *)copyCGGradient;
-(void)configureLayer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif