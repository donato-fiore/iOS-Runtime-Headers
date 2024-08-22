// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLMODEL_H
#define NSSQLMODEL_H

@class NSString, NSMutableArray;


#import "NSStoreMapping.h"
#import "NSManagedObjectModel.h"
#import "NSKnownKeysDictionary.h"

@interface NSSQLModel : NSStoreMapping {
    NSString *_configuration;
    NSManagedObjectModel *_mom;
    NSKnownKeysDictionary *_entitiesByName;
    NSMutableArray *_entities;
    *id _entityDescriptionToSQLMap;
    NSUInteger _brokenHashVersion;
    BOOL _retainLeopardStyleDictionaries;
    BOOL _modelHasPrecomputedKeyOrder;
    BOOL _hasVirtualToOnes;
    unsigned int _entityIDOffset;
    unsigned int _lastEntityID;
}




-(BOOL)_generateModel:(id)arg0 error:(*id)arg1 ;
-(id)configurationName;
-(id)entityForID:(NSUInteger)arg0 ;
-(id)entityNamed:(id)arg0 ;
-(id)initWithManagedObjectModel:(id)arg0 configurationName:(id)arg1 ;
-(id)initWithManagedObjectModel:(id)arg0 configurationName:(id)arg1 brokenHashVersion:(NSUInteger)arg2 ;
-(id)initWithManagedObjectModel:(id)arg0 configurationName:(id)arg1 retainHashHack:(BOOL)arg2 ;
-(id)managedObjectModel;
-(void)dealloc;


@end


#endif