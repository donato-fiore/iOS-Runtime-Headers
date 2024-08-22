// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSCONFIDENCEMODELDRIVER_H
#define _PSCONFIDENCEMODELDRIVER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _PSConfidenceModelDriver : NSObject

@property (retain, nonatomic) NSMutableDictionary *confidenceModelDictionary; // ivar: _confidenceModelDictionary


+(id)defaultArchivePath;
+(void)deleteArchiveFile;
-(BOOL)addEventForModel:(id)arg0 forUseCaseKey:(id)arg1 event:(id)arg2 ;
-(BOOL)registerModelKey:(id)arg0 forUseCaseKey:(id)arg1 confidenceWindowSize:(int)arg2 minimumInstanceCount:(int)arg3 ;
-(CGFloat)getConfidenceForModel:(id)arg0 forUseCaseKey:(id)arg1 ;
-(id)getDictionaryFromArchiveAtPath:(id)arg0 ;
-(id)getOrMakeConfidenceModelDictionary;
-(id)init;
-(void)writeArchive:(id)arg0 toFilePath:(id)arg1 ;
-(void)writeArchiveFromDict:(id)arg0 ;


@end


#endif