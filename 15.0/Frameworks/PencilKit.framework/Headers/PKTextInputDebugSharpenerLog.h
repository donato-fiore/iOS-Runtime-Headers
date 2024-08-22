// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTEXTINPUTDEBUGSHARPENERLOG_H
#define PKTEXTINPUTDEBUGSHARPENERLOG_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface PKTextInputDebugSharpenerLog : NSObject

@property (readonly, nonatomic) NSArray *logEntries; // ivar: _logEntries
@property (readonly, nonatomic) NSDictionary *metadataDictionary; // ivar: _metadataDictionary


+(BOOL)canLoadFromFileAtURL:(id)arg0 ;
+(id)_environmentMetadataDictionary;
+(id)_recommendedFileNameForLogWithDate:(id)arg0 ;
-(BOOL)_loadFromFileURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeToURL:(id)arg0 withContentLevel:(NSInteger)arg1 excludeEntyIndexes:(id)arg2 error:(*id)arg3 ;
-(id)_dictionaryRepresentationWithContentLevel:(NSInteger)arg0 excludeEntyIndexes:(id)arg1 ;
-(id)description;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithLogEntries:(id)arg0 ;
-(id)writeLogToTemporaryDirectoryWithContentLevel:(NSInteger)arg0 excludeEntyIndexes:(id)arg1 error:(*id)arg2 ;


@end


#endif