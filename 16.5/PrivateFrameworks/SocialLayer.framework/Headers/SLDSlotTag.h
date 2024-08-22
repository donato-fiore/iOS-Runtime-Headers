// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDSLOTTAG_H
#define SLDSLOTTAG_H

@class UISSlotTag;
@protocol NSCopying, NSCoding;



@interface SLDSlotTag : UISSlotTag <NSCopying, NSCoding>





+(NSUInteger)cacheLimit;
-(BOOL)isValid;
-(NSUInteger)authenticationMessageContextForStyle:(id)arg0 ;
-(NSUInteger)failGradeForStyle:(id)arg0 ;
-(NSUInteger)hitTestInformationMaskForStyle:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)resolvedStyleForStyle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif