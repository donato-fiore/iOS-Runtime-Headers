// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GSPERMANENTSTORAGE_H
#define GSPERMANENTSTORAGE_H

@class NSData, NSURL;
@protocol GSAdditionStoringPrivate, GSAdditionStoring, NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GSDocumentIdentifier.h"
#import "GSStagingPrefix.h"

@interface GSPermanentStorage : NSObject <GSAdditionStoringPrivate, GSAdditionStoring>

 {
    NSUInteger _remoteID;
    NSData *_pubExtension;
    NSData *_privExtension;
    NSInteger _pubHandle;
    NSInteger _privHandle;
}


@property (readonly, nonatomic) GSDocumentIdentifier *documentID;
@property (retain) NSURL *documentURL; // ivar: _documentURL
@property (readonly, nonatomic) NSObject<NSCopying><NSSecureCoding> *persistentIdentifier; // ivar: _documentID
@property (retain) NSData *privExtension;
@property (retain) NSData *pubExtension;
@property (readonly, nonatomic) NSInteger remoteID;
@property (retain, nonatomic) GSStagingPrefix *stagingPrefix; // ivar: _stagingPrefix
@property (readonly, nonatomic) NSUInteger storageID; // ivar: _storageID


+(id)storageIDForItemAtURL:(id)arg0 error:(*id)arg1 ;
+(id)storagePrefixForFileDescriptor:(int)arg0 error:(*id)arg1 ;
-(BOOL)_refreshRemoteIDWithFileDescriptor:(int)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mergeAdditionUserInfo:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(BOOL)replaceDocumentWithContentsOfAddition:(id)arg0 preservingCurrentVersionWithCreationInfo:(id)arg1 createdAddition:(*id)arg2 error:(*id)arg3 ;
-(BOOL)replaceDocumentWithContentsOfItemAtURL:(id)arg0 preservingCurrentVersionWithCreationInfo:(id)arg1 createdAddition:(*id)arg2 error:(*id)arg3 ;
-(BOOL)setAdditionDisplayName:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(BOOL)setAdditionOptions:(id)arg0 value:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)transferToItemAtURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)URLforReplacingItemWithError:(*id)arg0 ;
-(id)additionWithName:(id)arg0 inNameSpace:(id)arg1 error:(*id)arg2 ;
-(id)additionsWithNames:(id)arg0 inNameSpace:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)enumeratorForAdditionsInNameSpace:(id)arg0 withOptions:(NSUInteger)arg1 withoutOptions:(NSUInteger)arg2 ordering:(int)arg3 ;
-(id)getAdditionDictionary:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithFileDescriptor:(int)arg0 documentID:(id)arg1 forItemAtURL:(id)arg2 error:(*id)arg3 ;
-(id)prepareAdditionCreationWithItemAtURL:(id)arg0 byMoving:(BOOL)arg1 creationInfo:(id)arg2 error:(*id)arg3 ;
-(id)setAdditionNameSpace:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(id)stagingURLforCreatingAdditionWithError:(*id)arg0 ;
-(void)_connectionWithDaemonWasLost;
-(void)_invalidate;
-(void)cleanupStagingURL:(id)arg0 ;
-(void)createAdditionStagedAtURL:(id)arg0 creationInfo:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)finalize;
-(void)removeAdditions:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllAdditionsForNamespaces:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif