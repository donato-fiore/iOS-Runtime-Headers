// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIASSIGNMENT_H
#define TRIASSIGNMENT_H



#import "TRIPBMessage.h"
#import "TRICoreMLAssignmentLanguage.h"
#import "TRINSExpressionAssignmentLanguage.h"
#import "TRIPlanOutAssignmentLanguage.h"
#import "TRIRolloutAssignmentLanguage.h"
#import "TRIUIAssignmentLanguage.h"

@interface TRIAssignment : TRIPBMessage

@property (retain, nonatomic) TRICoreMLAssignmentLanguage *coremlLanguage;
@property (readonly, nonatomic) int languageOneOfCase;
@property (retain, nonatomic) TRINSExpressionAssignmentLanguage *nsexpressionLanguage;
@property (retain, nonatomic) TRIPlanOutAssignmentLanguage *planoutLanguage;
@property (retain, nonatomic) TRIRolloutAssignmentLanguage *rolloutLanguage;
@property (retain, nonatomic) TRIUIAssignmentLanguage *uiLanguage;


+(id)descriptor;


@end


#endif