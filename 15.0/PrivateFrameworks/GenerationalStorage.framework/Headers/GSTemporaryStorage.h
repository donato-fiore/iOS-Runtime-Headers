// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GSTEMPORARYSTORAGE_H
#define GSTEMPORARYSTORAGE_H

@class NSURL;
@protocol GSAdditionStoringPrivate, GSAdditionStoring, OS_dispatch_queue, NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GSTemporaryStorage : NSObject <GSAdditionStoringPrivate, GSAdditionStoring>

 {
    NSURL *_stagingURL;
    int _lockFd;
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (retain) NSURL *documentURL; // ivar: _documentURL
@property (readonly, nonatomic) NSURL *libraryURL; // ivar: _libraryURL
@property (readonly, nonatomic) NSObject<NSCopying><NSSecureCoding> *persistentIdentifier;


-(BOOL)__lockWithFlags:(int)arg0 error:(*id)arg1 ;
-(BOOL)_readLock:(*id)arg0 ;
-(BOOL)_writeLock:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mergeAdditionUserInfo:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(BOOL)replaceDocumentWithContentsOfAddition:(id)arg0 preservingCurrentVersionWithCreationInfo:(id)arg1 createdAddition:(*id)arg2 error:(*id)arg3 ;
-(BOOL)replaceDocumentWithContentsOfItemAtURL:(id)arg0 preservingCurrentVersionWithCreationInfo:(id)arg1 createdAddition:(*id)arg2 error:(*id)arg3 ;
-(BOOL)setAdditionDisplayName:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(BOOL)setAdditionOptions:(id)arg0 value:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)hash;
-(id)URLforReplacingItemWithError:(*id)arg0 ;
-(id)_URLForNameSpace:(id)arg0 createIfNeeded:(BOOL)arg1 allowMissing:(BOOL)arg2 error:(*id)arg3 ;
-(id)_enumerateItemsAtURL:(id)arg0 ;
-(id)additionWithName:(id)arg0 inNameSpace:(id)arg1 error:(*id)arg2 ;
-(id)additionsWithNames:(id)arg0 inNameSpace:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)enumeratorForAdditionsInNameSpace:(id)arg0 withOptions:(NSUInteger)arg1 withoutOptions:(NSUInteger)arg2 ordering:(int)arg3 ;
-(id)getAdditionDictionary:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithLibraryURL:(id)arg0 forItemAtURL:(id)arg1 error:(*id)arg2 ;
-(id)prepareAdditionCreationWithItemAtURL:(id)arg0 byMoving:(BOOL)arg1 creationInfo:(id)arg2 error:(*id)arg3 ;
-(id)setAdditionNameSpace:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(id)stagingURLforCreatingAdditionWithError:(*id)arg0 ;
-(void)_protectPath:(id)arg0 ;
-(void)_unlock;
-(void)_unprotectPath:(id)arg0 ;
-(void)cleanupStagingURL:(id)arg0 ;
-(void)createAdditionStagedAtURL:(id)arg0 creationInfo:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)finalize;
-(void)removeAdditions:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllAdditionsForNamespaces:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif