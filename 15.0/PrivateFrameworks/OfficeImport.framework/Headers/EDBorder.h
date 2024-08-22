// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDBORDER_H
#define EDBORDER_H


#import <Foundation/Foundation.h>

#import "EDResources.h"
#import "EDColorReference.h"

@interface EDBorder : NSObject {
    EDResources *mResources;
    int mType;
    EDColorReference *mColorReference;
    int mDiagonalType;
}




+(id)borderWithType:(int)arg0 color:(id)arg1 diagonalType:(int)arg2 resources:(id)arg3 ;
+(id)borderWithType:(int)arg0 color:(id)arg1 resources:(id)arg2 ;
+(id)borderWithType:(int)arg0 colorReference:(id)arg1 diagonalType:(int)arg2 resources:(id)arg3 ;
+(id)borderWithType:(int)arg0 colorReference:(id)arg1 resources:(id)arg2 ;
+(id)borderWithType:(int)arg0 resources:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBorder:(id)arg0 ;
-(NSUInteger)hash;
-(id)color;
-(id)colorReference;
-(id)description;
-(id)initWithResources:(id)arg0 ;
-(int)diagonalType;
-(int)type;
-(void)setDiagonalType:(int)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif