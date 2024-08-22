// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXTEXTSOURCEFONTATTRIBUTES_H
#define SXTEXTSOURCEFONTATTRIBUTES_H

@class NSString;
@protocol SXFontAttributes;


#import "SXFontAttributes.h"

@interface SXTextSourceFontAttributes : SXFontAttributes <SXFontAttributes>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *familyName; // ivar: _familyName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger weight; // ivar: _weight
@property (readonly, nonatomic) NSInteger width; // ivar: _width


+(id)attributesWithFamilyName:(id)arg0 style:(NSInteger)arg1 weight:(NSInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif