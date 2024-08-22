// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLFILESYSTEMPERSISTENCE_H
#define PLFILESYSTEMPERSISTENCE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLFileSystemPersistence : NSObject {
    NSObject<OS_dispatch_queue> *_writerQueue;
}




+(id)filesystemPersistenceBatchItemForFileAtURL:(id)arg0 ;
+(id)persistedAttributesForFileAtURL:(id)arg0 ;
+(id)persistedAttributesForFileAtURL:(id)arg0 exists:(*BOOL)arg1 includeUnknownAttributes:(BOOL)arg2 ;
+(id)persistenceKeyTypes;
+(id)sharedInstance;
+(void)clearAllAttributesForFileAtUrl:(id)arg0 ;
+(void)performBlockOnWriterQueue:(id)arg0 ;
+(void)persistData:(id)arg0 forKey:(id)arg1 fileURL:(id)arg2 ;
+(void)persistMetadata:(id)arg0 fileURL:(id)arg1 ;
+(void)persistString:(id)arg0 forKey:(id)arg1 fileURL:(id)arg2 ;
+(void)persistUInt16:(unsigned short)arg0 forKey:(id)arg1 fileURL:(id)arg2 ;
+(void)persistUUIDString:(id)arg0 forKey:(id)arg1 fileURL:(id)arg2 ;
-(id)init;
-(void)_backgroundWriteData:(id)arg0 toFileAtURL:(id)arg1 ;
-(void)_performOnWriterQueueWithIdentifier:(char *)arg0 block:(id)arg1 ;


@end


#endif