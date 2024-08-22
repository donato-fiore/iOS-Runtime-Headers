// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDATAPERSISTER_H
#define ICDATAPERSISTER_H

@class NSMutableArray, NSURL, NSMutableDictionary, NSString;
@protocol ICDataPersister, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICDataCryptor.h"

@interface ICDataPersister : NSObject <ICDataPersister, NSSecureCoding>



@property (nonatomic) NSUInteger accumulatedDataSize; // ivar: _accumulatedDataSize
@property (readonly, nonatomic) NSMutableArray *allURLs; // ivar: _allURLs
@property (readonly, nonatomic) NSURL *cacheDirectoryURL; // ivar: _cacheDirectoryURL
@property (readonly, nonatomic) ICDataCryptor *dataCryptor; // ivar: _dataCryptor
@property (readonly, nonatomic) NSMutableDictionary *identifierToDataDictionary; // ivar: _identifierToDataDictionary
@property (readonly, nonatomic) NSString *objectIdentifier; // ivar: _objectIdentifier


+(BOOL)supportsSecureCoding;
+(id)rootCacheDirectoryPathForPasteboard:(BOOL)arg0 ;
+(void)deletePasteboardDataFiles;
-(BOOL)makeSureCacheDirectoryExists;
-(BOOL)saveData:(id)arg0 identifier:(id)arg1 ;
-(BOOL)verifyDataFiles;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectIdentifier:(id)arg0 forPasteboard:(BOOL)arg1 ;
-(id)loadDataForIdentifier:(id)arg0 ;
-(void)createDataCryptorIfNecessary;
-(void)deleteDataFiles;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif