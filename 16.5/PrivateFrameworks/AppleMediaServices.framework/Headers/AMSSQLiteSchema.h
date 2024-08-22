// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSSQLITESCHEMA_H
#define AMSSQLITESCHEMA_H


#import <Foundation/Foundation.h>

#import "AMSSQLiteConnection.h"

@interface AMSSQLiteSchema : NSObject {
    AMSSQLiteConnection *_connection;
}


@property (readonly) NSInteger currentUserVersion;


-(BOOL)column:(id)arg0 existsInTable:(id)arg1 ;
-(BOOL)migrateToVersion:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(BOOL)tableExists:(id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(void)_setUserVersion:(NSInteger)arg0 ;


@end


#endif