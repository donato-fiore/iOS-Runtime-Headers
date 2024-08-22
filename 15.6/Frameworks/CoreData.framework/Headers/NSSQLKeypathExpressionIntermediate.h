// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLKEYPATHEXPRESSIONINTERMEDIATE_H
#define NSSQLKEYPATHEXPRESSIONINTERMEDIATE_H



#import "NSSQLExpressionIntermediate.h"

@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate {
    BOOL _substitutePK;
}




-(id)_generateSQLForKeyPathExpression:(id)arg0 allowToMany:(BOOL)arg1 inContext:(id)arg2 ;
-(id)generateSQLStringInContext:(id)arg0 ;


@end


#endif