// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTDBCONFIG_H
#define MTDBCONFIG_H

@class NSManagedObjectModel;
@protocol MTCoreDataContainerConfigProvider;

#import <Foundation/Foundation.h>


@interface MTDBConfig : NSObject <MTCoreDataContainerConfigProvider>



@property (retain, nonatomic) NSManagedObjectModel *model; // ivar: _model


-(id)databaseFileUrl;
-(id)managedObjectModel;
-(id)persistentStoreOptions;


@end


#endif