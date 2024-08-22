// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDBUILD_H
#define PDBUILD_H


#import <Foundation/Foundation.h>

#import "OADDrawable.h"

@interface PDBuild : NSObject {
    BOOL mIsAnimateBackground;
    OADDrawable *mDrawable;
}




-(BOOL)isAnimateBackground;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)drawable;
-(id)init;
-(void)setDrawable:(id)arg0 ;
-(void)setIsAnimateBackground:(BOOL)arg0 ;


@end


#endif