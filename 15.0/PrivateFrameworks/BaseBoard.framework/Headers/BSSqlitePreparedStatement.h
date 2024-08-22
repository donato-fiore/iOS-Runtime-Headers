// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSSQLITEPREPAREDSTATEMENT_H
#define BSSQLITEPREPAREDSTATEMENT_H


#import <Foundation/Foundation.h>

#import "BSSqliteDatabaseConnection.h"

@interface BSSqlitePreparedStatement : NSObject {
    BSSqliteDatabaseConnection *_dbConnection;
}




// -(BOOL)executeWithBindings:(id)arg0 resultRowHandler:(id)arg1 error:(unk)arg2  ;
-(id)init;
-(void)dealloc;


@end


#endif