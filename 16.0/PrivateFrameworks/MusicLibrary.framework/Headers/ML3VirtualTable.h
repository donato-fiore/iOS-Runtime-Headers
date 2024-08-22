// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3VIRTUALTABLE_H
#define ML3VIRTUALTABLE_H

@class NSString;
@protocol ML3DatabaseModuleContext, ML3VirtualTableDelegate;

#import <Foundation/Foundation.h>

#import "ML3DatabaseModule.h"
#import "ML3DatabaseConnection.h"
#import "ML3DatabaseTable.h"

@interface ML3VirtualTable : NSObject <ML3DatabaseModuleContext>

 {
    NSString *_virtualTableName;
    ML3DatabaseModule *_module;
}


@property (readonly, nonatomic) ML3DatabaseConnection *connection; // ivar: _connection
@property (nonatomic) shared_ptr<ML3VirtualTableDataSource> dataSource; // ivar: _dataSource
@property (readonly, nonatomic) ML3DatabaseTable *databaseTable; // ivar: _databaseTable
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ML3VirtualTableDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly) Class superclass;


-(BOOL)registerWithConnection:(id)arg0 ;
-(BOOL)unregister;
-(id)initWithDatabaseTable:(id)arg0 ;
-(void)dealloc;


@end


#endif