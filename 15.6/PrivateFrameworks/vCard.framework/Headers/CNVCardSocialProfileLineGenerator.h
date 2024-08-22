// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARDSOCIALPROFILELINEGENERATOR_H
#define CNVCARDSOCIALPROFILELINEGENERATOR_H



#import "CNVCardLineGenerator.h"

@interface CNVCardSocialProfileLineGenerator : CNVCardLineGenerator



-(BOOL)isStandardServiceName:(id)arg0 ;
-(id)lineWithValue:(id)arg0 label:(id)arg1 ;
-(void)addCustomLabel:(id)arg0 toLine:(id)arg1 ;
-(void)addPrimaryValueMarkerToLine:(id)arg0 ;
-(void)addStandardLabel:(id)arg0 toLine:(id)arg1 ;


@end


#endif