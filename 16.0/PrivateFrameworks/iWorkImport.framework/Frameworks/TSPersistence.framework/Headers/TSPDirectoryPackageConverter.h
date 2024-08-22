// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDIRECTORYPACKAGECONVERTER_H
#define TSPDIRECTORYPACKAGECONVERTER_H



#import "TSPPackageConverter.h"

@interface TSPDirectoryPackageConverter : TSPPackageConverter



-(BOOL)enumeratePackageEntriesWithZipArchive:(id)arg0 needsReadChannel:(BOOL)arg1 accessor:(id)arg2 ;
-(BOOL)isValid;
// -(BOOL)performAccessor:(id)arg0 filePathCharacterIndex:(unk)arg1 fileURL:(NSUInteger)arg2 needsReadChannel:(id)arg3 zipArchive:(BOOL)arg4 error:(id)arg5  ;
-(NSUInteger)progressTotalUnitCountWithZipArchive:(id)arg0 ;


@end


#endif