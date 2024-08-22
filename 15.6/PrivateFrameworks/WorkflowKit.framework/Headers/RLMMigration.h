// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RLMMIGRATION_H
#define RLMMIGRATION_H


#import <Foundation/Foundation.h>

#import "RLMSchema.h"
#import "RLMRealm.h"

@interface RLMMigration : NSObject {
    *void _schema;
    unordered_map<NSString *, realm::IndexSet, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, realm::IndexSet>>> _deletedObjectIndices;
}


@property (readonly, nonatomic) RLMSchema *newSchema;
@property (retain, nonatomic) RLMRealm *oldRealm; // ivar: _oldRealm
@property (readonly, nonatomic) RLMSchema *oldSchema;
@property (retain, nonatomic) RLMRealm *realm; // ivar: _realm


-(BOOL)deleteDataForClassName:(id)arg0 ;
-(id)createObject:(id)arg0 withObject:(id)arg1 ;
-(id)createObject:(id)arg0 withValue:(id)arg1 ;
-(id)initWithRealm:(id)arg0 oldRealm:(id)arg1 schema:(*void)arg2 ;
-(void)deleteObject:(id)arg0 ;
-(void)deleteObjectsMarkedForDeletion;
-(void)enumerateObjects:(id)arg0 block:(id)arg1 ;
-(void)execute:(id)arg0 ;
-(void)renamePropertyForClass:(id)arg0 oldName:(id)arg1 newName:(id)arg2 ;


@end


#endif