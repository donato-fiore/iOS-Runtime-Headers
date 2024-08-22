// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSQLITERAWCHECKCONSTRAINT_H
#define HDSQLITERAWCHECKCONSTRAINT_H

@class NSString;


#import "HDSQLiteCheckConstraint.h"

@interface HDSQLiteRawCheckConstraint : HDSQLiteCheckConstraint {
    NSString *_rawSQL;
}




+(id)checkConstraintWithSQL:(id)arg0 ;
-(id)SQLCheckConstraint;


@end


#endif