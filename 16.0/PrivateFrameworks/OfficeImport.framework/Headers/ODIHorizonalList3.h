// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODIHORIZONALLIST3_H
#define ODIHORIZONALLIST3_H


#import <Foundation/Foundation.h>

#import "ODIState.h"

@interface ODIHorizonalList3 : NSObject {
    unsigned int mMaxPointCount;
    ODIState *mState;
}




+(BOOL)mapIdentifier:(id)arg0 state:(id)arg1 ;
-(id)initWithState:(id)arg0 ;
-(void)map;
-(void)mapBaseStyleFromPoint:(id)arg0 shape:(id)arg1 ;
-(void)mapOnePillarStyleFromPoint:(id)arg0 shape:(id)arg1 ;
-(void)mapPillarPoints:(id)arg0 bounds:(struct CGRect )arg1 ;
-(void)mapRoofStyleFromPoint:(id)arg0 shape:(id)arg1 ;
-(void)setMaxPointCount:(unsigned int)arg0 ;


@end


#endif