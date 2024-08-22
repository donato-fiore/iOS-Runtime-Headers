// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3IMPORTPERSISTENTIDGENERATOR_H
#define ML3IMPORTPERSISTENTIDGENERATOR_H

@class NSMutableDictionary;


#import "ML3PersistentIDGenerator.h"

@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator {
    NSMutableDictionary *_pregeneratedIdMappings;
}




-(NSInteger)nextPersistentIDForImportItem:(struct shared_ptr<ML3ImportItem> )arg0 ;
-(id)initWithDatabaseConnection:(id)arg0 tableName:(id)arg1 ;
-(void)addIdMapping:(id)arg0 forProperty:(unsigned int)arg1 ;
-(void)removePersistentIDFromIdMapping:(NSInteger)arg0 ;


@end


#endif