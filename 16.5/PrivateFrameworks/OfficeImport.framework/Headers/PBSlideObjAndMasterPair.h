// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBSLIDEOBJANDMASTERPAIR_H
#define PBSLIDEOBJANDMASTERPAIR_H


#import <Foundation/Foundation.h>

#import "PDSlide.h"

@interface PBSlideObjAndMasterPair : NSObject {
    PDSlide *mSlide;
    int mMasterId;
}




+(id)createPair:(id)arg0 masterId:(int)arg1 ;
-(id)slide;
-(int)masterId;
-(void)setSlide:(id)arg0 masterId:(int)arg1 ;


@end


#endif