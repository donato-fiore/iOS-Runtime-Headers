// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXMSAMPLETAGFILTER_H
#define MXMSAMPLETAGFILTER_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;


#import "MXMSampleTag.h"

@interface MXMSampleTagFilter : MXMSampleTag <NSCopying, NSSecureCoding>

 {
    BOOL _allowDescendents;
}


@property (readonly, nonatomic) BOOL finite;
@property (readonly, nonatomic, getter=finite) BOOL isFinite;
@property (copy, nonatomic) NSSet *tagPermutations; // ivar: _tagPermutations


+(BOOL)supportsSecureCoding;
-(BOOL)matchesSampleWithTag:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTag:(id)arg0 allowDescendents:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif