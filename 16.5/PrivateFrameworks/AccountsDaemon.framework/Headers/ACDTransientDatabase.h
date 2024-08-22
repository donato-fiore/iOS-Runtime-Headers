// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACDTRANSIENTDATABASE_H
#define ACDTRANSIENTDATABASE_H

@class NSPersistentStoreCoordinator, NSString;
@protocol ACDDatabaseProtocol;

#import <Foundation/Foundation.h>


@interface ACDTransientDatabase : NSObject <ACDDatabaseProtocol>

 {
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_addPersistentStoreWithType:(id)arg0 configuration:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)createConnection;
-(id)init;


@end


#endif