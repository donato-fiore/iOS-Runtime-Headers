// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDINVERTCOORDINATEOPTIONS_H
#define PDINVERTCOORDINATEOPTIONS_H



#import "PDTransitionOptions.h"

@interface PDInvertCoordinateOptions : PDTransitionOptions {
    BOOL mIsInvX;
    BOOL mIsInvY;
}




-(BOOL)isInvX;
-(BOOL)isInvY;
-(void)setIsInvX:(BOOL)arg0 ;
-(void)setIsInvY:(BOOL)arg0 ;


@end


#endif