// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLSMSCORENORMALIZEDMAP_H
#define WFLSMSCORENORMALIZEDMAP_H



#import "WFLSMMap.h"

@interface WFLSMScoreNormalizedMap : WFLSMMap {
    *float maxScore;
    *float minScore;
}




-(id)evaluate:(id)arg0 ;
-(id)initWithMap:(struct __LSMMap *)arg0 ;
-(void)dealloc;


@end


#endif