// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDPRISMOPTIONS_H
#define PDPRISMOPTIONS_H



#import "PDSideDirectionOptions.h"

@interface PDPrismOptions : PDSideDirectionOptions {
    BOOL mIsContent;
    BOOL mIsInverted;
}




-(BOOL)isContent;
-(BOOL)isInverted;
-(void)setIsContent:(BOOL)arg0 ;
-(void)setIsInverted:(BOOL)arg0 ;


@end


#endif