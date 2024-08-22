// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKFILEBASEDKEYEDDATASTORE_H
#define CRKFILEBASEDKEYEDDATASTORE_H

@class NSString, NSDictionary, NSURL, NSFileManager;
@protocol CRKKeyedDataStoreProtocol;

#import <Foundation/Foundation.h>


@interface CRKFileBasedKeyedDataStore : NSObject <CRKKeyedDataStoreProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *directoryResourceValuesByKey; // ivar: _directoryResourceValuesByKey
@property (retain, nonatomic) NSURL *directoryURL; // ivar: _directoryURL
@property (retain, nonatomic) NSFileManager *fileManager; // ivar: _fileManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)excludedFromiCloudBackupStoreWithDirectoryURL:(id)arg0 ;
-(BOOL)isKeyValid:(id)arg0 ;
-(BOOL)removeAllDataWithError:(*id)arg0 ;
-(BOOL)removeDataForKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)setData:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)URLForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithDirectoryURL:(id)arg0 ;
-(id)initWithDirectoryURL:(id)arg0 directoryResourceValuesByKey:(id)arg1 ;
-(void)updateExistingDirectoryResourceValues;


@end


#endif