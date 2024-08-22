// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHDRELATIVESIZEANCHOR_H
#define CHDRELATIVESIZEANCHOR_H



#import "CHDAnchor.h"

@interface CHDRelativeSizeAnchor : CHDAnchor {
    CGPoint mFrom;
    CGPoint mTo;
}




-(struct CGPoint )from;
-(struct CGPoint )to;
-(void)setFrom:(struct CGPoint )arg0 ;
-(void)setTo:(struct CGPoint )arg0 ;


@end


#endif