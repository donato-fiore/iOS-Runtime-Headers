// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCATEGORYJUDGEMENT_H
#define WFCATEGORYJUDGEMENT_H


#import <Foundation/Foundation.h>


@interface WFCategoryJudgement : NSObject {
    float score;
    NSInteger category;
}




+(id)categoryJudgementWithCategory:(NSInteger)arg0 score:(float)arg1 ;
-(NSInteger)category;
-(NSInteger)compareByCategory:(id)arg0 ;
-(NSInteger)compareByScore:(id)arg0 ;
-(float)score;
-(id)description;
-(void)setCategory:(NSInteger)arg0 ;
-(void)setScore:(float)arg0 ;


@end


#endif