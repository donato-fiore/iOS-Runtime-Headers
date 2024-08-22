// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BSSQLITEPREPAREDSIMPLESTATEMENT_H
#define _BSSQLITEPREPAREDSIMPLESTATEMENT_H

@class NSString;
@protocol BSSqliteDatabaseConnectionObserver;


#import "BSSqlitePreparedStatement.h"

@interface _BSSqlitePreparedSimpleStatement : BSSqlitePreparedStatement <BSSqliteDatabaseConnectionObserver>

 {
    *sqlite3_stmt _statement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(BOOL)executeWithBindings:(id)arg0 resultRowHandler:(id)arg1 error:(unk)arg2  ;
-(void)dealloc;
-(void)sqliteDatabaseConnectionWillClose:(id)arg0 ;


@end


#endif