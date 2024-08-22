// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDABSTRACTDATABASEDOWNGRADER_H
#define IMDABSTRACTDATABASEDOWNGRADER_H



#import "IMAbstractDatabaseArchiver.h"

@interface IMDAbstractDatabaseDowngrader : IMAbstractDatabaseArchiver



-(BOOL)copyDatabase:(id)arg0 ;
-(id)createDowngradeHelper;


@end


#endif