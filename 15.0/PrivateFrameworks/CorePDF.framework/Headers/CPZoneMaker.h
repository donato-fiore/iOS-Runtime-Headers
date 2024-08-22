// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPZONEMAKER_H
#define CPZONEMAKER_H


#import <Foundation/Foundation.h>

#import "CPCharSequence.h"

@interface CPZoneMaker : NSObject {
    CPCharSequence *charactersOnPage;
}




-(BOOL)overlap:(id)arg0 with:(id)arg1 ;
-(id)newZoneForStraddlersFrom:(id)arg0 ;
-(unsigned int)categorizeGraphicsIn:(id)arg0 ;
-(void)addObjectsToStraddler:(id)arg0 from:(id)arg1 ;
-(void)addZonesWithBoundaryIn:(id)arg0 withBorder:(id)arg1 ;
-(void)cutHorizontalBorders:(id)arg0 whereObscuredByShape:(id)arg1 ;
-(void)cutVerticalBorders:(id)arg0 whereObscuredByShape:(id)arg1 ;
-(void)dealloc;
-(void)makeZonesIn:(id)arg0 ;
-(void)makeZonesWithBoundaryIn:(id)arg0 ;
-(void)mergeQualifyingRectanglesIn:(id)arg0 ;


@end


#endif