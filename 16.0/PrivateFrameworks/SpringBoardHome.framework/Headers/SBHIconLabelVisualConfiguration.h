// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHICONLABELVISUALCONFIGURATION_H
#define SBHICONLABELVISUALCONFIGURATION_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBHIconLabelVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>



@property (nonatomic) CGFloat baselineOffsetFromImage; // ivar: _baselineOffsetFromImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat extraWidth; // ivar: _extraWidth
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat height; // ivar: _height
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif