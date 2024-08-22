// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMVO2MAXCLASSIFICATION_H
#define CMVO2MAXCLASSIFICATION_H


#import <Foundation/Foundation.h>


@interface CMVO2MaxClassification : NSObject {
    unique_ptr<CLVO2MaxClassifier, std::default_delete<CLVO2MaxClassifier>> fVO2MaxClassifier;
}




+(NSInteger)biologicalSexFromCLHKBiologicalSex:(int)arg0 ;
+(int)CLHKBiologicalSexFromBiologicalSex:(NSInteger)arg0 ;
-(id)classificationDataFromStruct:(struct CLVO2MaxClassificationData )arg0 ;
-(id)init;
-(void)queryAllClassificationsWithHandler:(id)arg0 ;
-(void)queryClassificationForBiologicalSex:(NSInteger)arg0 age:(NSInteger)arg1 handler:(id)arg2 ;
-(void)queryClassificationForBiologicalSex:(NSInteger)arg0 age:(NSInteger)arg1 vo2Max:(CGFloat)arg2 handler:(id)arg3 ;


@end


#endif