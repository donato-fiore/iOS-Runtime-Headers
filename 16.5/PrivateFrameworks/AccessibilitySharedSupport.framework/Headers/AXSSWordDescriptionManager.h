// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSWORDDESCRIPTIONMANAGER_H
#define AXSSWORDDESCRIPTIONMANAGER_H

@class NSString, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

#import <Foundation/Foundation.h>


@interface AXSSWordDescriptionManager : NSObject

@property (retain, nonatomic) NSString *languageDialectCode; // ivar: languageDialectCode
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // ivar: _managedObjectModel
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // ivar: _persistentStoreCoordinator


+(id)sharedInstance;
-(id)descriptionForWord:(id)arg0 ;
-(id)descriptionOfWord:(id)arg0 forLanguage:(id)arg1 ;
-(id)languageCode;


@end


#endif