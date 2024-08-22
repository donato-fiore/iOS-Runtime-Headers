// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSCLASSIFICATIONINFORMANT_H
#define CLSCLASSIFICATIONINFORMANT_H



#import "CLSInformant.h"

@interface CLSClassificationInformant : CLSInformant



+(id)classIdentifier;
+(id)familyIdentifier;
+(id)informantDependenciesIdentifiers;
-(CGFloat)_confidenceForCount:(NSUInteger)arg0 mu:(CGFloat)arg1 sigma:(CGFloat)arg2 ;
-(id)gatherCluesForInvestigation:(id)arg0 progressBlock:(id)arg1 ;


@end


#endif