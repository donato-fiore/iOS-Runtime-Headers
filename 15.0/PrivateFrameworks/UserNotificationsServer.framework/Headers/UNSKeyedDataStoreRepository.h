// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSKEYEDDATASTOREREPOSITORY_H
#define UNSKEYEDDATASTOREREPOSITORY_H

@class NSString;
@protocol UNSContentProtectionStrategy;

#import <Foundation/Foundation.h>

#import "UNSBundleLibrarian.h"

@interface UNSKeyedDataStoreRepository : NSObject {
    NSString *_directory;
    NSString *_fileName;
    NSString *_pathExtension;
    UNSBundleLibrarian *_librarian;
    id<UNSContentProtectionStrategy> *_protectionStrategy;
    NSString *_objectIdentifierKey;
    NSInteger _maxObjectsPerKey;
    BOOL _shouldExcludeFromBackup;
}




-(BOOL)_isReplacementSupported;
-(BOOL)_saveObjects:(id)arg0 atPath:(id)arg1 ;
-(BOOL)_useReplacementToImport:(id)arg0 into:(id)arg1 ;
-(id)_addObject:(id)arg0 mustReplace:(BOOL)arg1 atPath:(id)arg2 ;
-(id)_addObject:(id)arg0 toObjects:(id)arg1 mustReplace:(BOOL)arg2 receipt:(*id)arg3 ;
-(id)_dataAtPath:(id)arg0 ;
-(id)_directoryForKey:(id)arg0 ;
-(id)_objectsAtPath:(id)arg0 ;
-(id)_objectsForData:(id)arg0 identifier:(id)arg1 ;
// -(id)_objectsPassingTest:(id)arg0 atPath:(unk)arg1  ;
-(id)_pathForKey:(id)arg0 ;
// -(id)_removeObjectsPassingTest:(id)arg0 atPath:(unk)arg1  ;
-(id)addObject:(id)arg0 forKey:(id)arg1 ;
-(id)addObject:(id)arg0 mustReplace:(BOOL)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)directoryPath;
-(id)initWithDirectory:(id)arg0 fileName:(id)arg1 pathExtension:(id)arg2 librarian:(id)arg3 repositoryProtectionStrategy:(id)arg4 objectIdentifierKey:(id)arg5 maxObjectsPerKey:(NSInteger)arg6 shouldExcludeFromBackup:(BOOL)arg7 ;
-(id)objectsForKey:(id)arg0 ;
// -(id)objectsPassingTest:(id)arg0 forKey:(unk)arg1  ;
// -(id)removeObjectsPassingTest:(id)arg0 forKey:(unk)arg1  ;
-(id)replaceObject:(id)arg0 forKey:(id)arg1 ;
-(void)_removeItemAtPath:(id)arg0 ;
-(void)_setObjects:(id)arg0 atPath:(id)arg1 ;
-(void)migrateStoreAtPath:(id)arg0 forKey:(id)arg1 ;
-(void)protectionStateChanged;
-(void)removeAllObjectsForKey:(id)arg0 ;
-(void)removeDataStoreRepository;
-(void)removeStoreForKey:(id)arg0 ;
-(void)setObjects:(id)arg0 forKey:(id)arg1 ;


@end


#endif