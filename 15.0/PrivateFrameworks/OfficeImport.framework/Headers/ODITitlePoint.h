// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ODITITLEPOINT_H
#define ODITITLEPOINT_H

@class NSString;


#import "ODIHorizonalList3.h"

@interface ODITitlePoint : ODIHorizonalList3 {
    NSString *mTitlePointPresentationName;
}




-(id)initWithTitlePointPresentationName:(id)arg0 state:(id)arg1 ;
-(void)mapBaseStyleFromPoint:(id)arg0 shape:(id)arg1 ;
-(void)mapOnePillarStyleFromPoint:(id)arg0 shape:(id)arg1 ;
-(void)mapRoofStyleFromPoint:(id)arg0 shape:(id)arg1 ;


@end


#endif