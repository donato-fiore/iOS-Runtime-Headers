// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSPERSISTENTCONTAINER_H
#define VSPERSISTENTCONTAINER_H

@class NSPersistentContainer, NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface VSPersistentContainer : NSObject

@property (readonly, nonatomic) NSInteger modelVersion; // ivar: _modelVersion
@property (retain, nonatomic) NSPersistentContainer *persistentContainer; // ivar: _persistentContainer
@property (retain, nonatomic) NSManagedObjectContext *viewContext; // ivar: _viewContext


+(id)directoryURL;
+(id)legacyDirectoryURL;
-(id)developerIdentityProviderFetchRequest;
-(id)init;
-(id)initWithModelVersion:(NSInteger)arg0 ;
-(id)insertDeveloperIdentityProviderInContext:(id)arg0 ;
-(void)migrateContainerIfNecessary;
-(void)performBlock:(id)arg0 ;


@end


#endif