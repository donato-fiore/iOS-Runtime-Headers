// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDISPLAYITEMGRIDLAYOUTRESTRICTIONINFO_H
#define SBDISPLAYITEMGRIDLAYOUTRESTRICTIONINFO_H


#import <Foundation/Foundation.h>


@interface SBDisplayItemGridLayoutRestrictionInfo : NSObject {
    NSUInteger _cachedHash;
}


@property (readonly, nonatomic) NSUInteger layoutRestrictions; // ivar: _layoutRestrictions
@property (readonly, nonatomic) CGSize restrictedSize; // ivar: _restrictedSize


+(id)layoutRestrictionInfoWithLayoutRestrictions:(NSUInteger)arg0 restrictedSize:(struct CGSize )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithLayoutRestrictions:(NSUInteger)arg0 restrictedSize:(struct CGSize )arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif