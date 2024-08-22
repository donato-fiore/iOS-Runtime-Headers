// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMABSTRACTDATABASETRIMMER_H
#define IMABSTRACTDATABASETRIMMER_H



#import "IMAbstractDatabaseArchiver.h"

@interface IMAbstractDatabaseTrimmer : IMAbstractDatabaseArchiver



-(BOOL)copyDatabase:(id)arg0 ;
-(BOOL)trimDatabaseWithOperation:(struct IMDSqlOperation *)arg0 ;
-(void)performMessageSelectionWithOperation:(struct IMDSqlOperation *)arg0 ;


@end


#endif