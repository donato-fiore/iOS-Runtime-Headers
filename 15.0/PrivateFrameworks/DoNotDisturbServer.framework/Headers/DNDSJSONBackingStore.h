// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSJSONBACKINGSTORE_H
#define DNDSJSONBACKINGSTORE_H

@class NSURL, NSString;
@protocol DNDSSysdiagnoseDataProvider, DNDSBackingStore, DNDSBackingStoreDelegate;

#import <Foundation/Foundation.h>


@interface DNDSJSONBackingStore : NSObject <DNDSSysdiagnoseDataProvider, DNDSBackingStore>

 {
    Class _recordClass;
    NSURL *_fileURL;
    NSURL *_secureFileURL;
    NSUInteger _versionNumber;
    BOOL _deviceOutOfSpace;
    NSUInteger _securityClass;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSBackingStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;


+(NSUInteger)dataWritingOptionsForSecurityClass:(NSUInteger)arg0 ;
-(NSUInteger)writeRecord:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)writeRecord:(id)arg0 writePartition:(BOOL)arg1 error:(*id)arg2 ;
-(NSUInteger)writeRecordDictionary:(id)arg0 withSecurityClass:(NSUInteger)arg1 toURL:(id)arg2 error:(*id)arg3 ;
-(id)initWithRecordClass:(Class)arg0 fileURL:(id)arg1 secureFileURL:(id)arg2 versionNumber:(NSUInteger)arg3 securityClass:(NSUInteger)arg4 ;
-(id)initWithRecordClass:(Class)arg0 fileURL:(id)arg1 versionNumber:(NSUInteger)arg2 ;
-(id)readRecordDictionaryfromURL:(id)arg0 withError:(*id)arg1 ;
-(id)readRecordWithError:(*id)arg0 ;
-(id)sysdiagnoseDataForDate:(id)arg0 redacted:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif