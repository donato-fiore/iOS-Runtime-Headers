// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHDABSOLUTESIZEANCHOR_H
#define CHDABSOLUTESIZEANCHOR_H



#import "CHDAnchor.h"

@interface CHDAbsoluteSizeAnchor : CHDAnchor {
    CGPoint mFrom;
    CGSize mSize;
}




-(struct CGPoint )from;
-(struct CGSize )size;
-(void)setFrom:(struct CGPoint )arg0 ;
-(void)setSize:(struct CGSize )arg0 ;


@end


#endif