// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DACPLOGSHARED_H
#define DACPLOGSHARED_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface DACPLogShared : NSObject {
    NSMutableDictionary *_UUIDToFileMap;
}




+(id)shared;
-(BOOL)_array:(id)arg0 beginsWithArray:(id)arg1 outRemainingArray:(*id)arg2 ;
-(BOOL)_logData:(id)arg0 UUID:(id)arg1 startNewFile:(BOOL)arg2 sizeCheck:(NSInteger)arg3 wantsCompressed:(BOOL)arg4 maxFileCount:(NSInteger)arg5 outDidCreateNewFile:(*BOOL)arg6 outNewFilePath:(*id)arg7 ;
-(BOOL)_slurpToFileUUID:(id)arg0 slurpeeFileDescriptor:(int)arg1 prefix:(id)arg2 suffix:(id)arg3 startNewFile:(BOOL)arg4 sizeCheck:(NSInteger)arg5 wantsCompressed:(BOOL)arg6 maxLogFileCount:(int)arg7 outDidCreateNewFile:(*BOOL)arg8 outNewFilePath:(*id)arg9 ;
-(id)_getUUIDForFolder:(id)arg0 baseName:(id)arg1 ;
-(id)init;


@end


#endif