// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRINSEXPRESSIONASSIGNMENTLANGUAGE_H
#define TRINSEXPRESSIONASSIGNMENTLANGUAGE_H

@class NSString;


#import "TRIPBMessage.h"

@interface TRINSExpressionAssignmentLanguage : TRIPBMessage

@property (copy, nonatomic) NSString *assignmentExpression;
@property (nonatomic) BOOL hasAssignmentExpression;
@property (nonatomic) BOOL hasSchemaVersion;
@property (nonatomic) unsigned int schemaVersion;


+(id)descriptor;


@end


#endif