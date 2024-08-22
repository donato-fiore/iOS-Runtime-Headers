// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBDISPLAYSWITHSIZEPREDICATE_H
#define _SBDISPLAYSWITHSIZEPREDICATE_H



#import "SBDisplayModePredicate.h"

@interface _SBDisplaysWithSizePredicate : SBDisplayModePredicate {
    NSUInteger _diagonal;
    CGSize _nativePixelSize;
}




+(id)fromDefaultsKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesDisplay:(id)arg0 ;
-(NSUInteger)hash;
-(id)defaultsKeyRepresentation;
-(id)description;
-(id)initWithDiagonal:(NSUInteger)arg0 pixelSize:(struct CGSize )arg1 ;
-(id)initWithDisplay:(id)arg0 ;


@end


#endif