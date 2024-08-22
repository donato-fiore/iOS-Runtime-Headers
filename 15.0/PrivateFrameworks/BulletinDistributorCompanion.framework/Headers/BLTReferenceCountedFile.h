// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTREFERENCECOUNTEDFILE_H
#define BLTREFERENCECOUNTEDFILE_H


#import <Foundation/Foundation.h>


@interface BLTReferenceCountedFile : NSObject



+(BOOL)release:(id)arg0 ;
+(BOOL)retain:(id)arg0 ;
+(BOOL)retain:(id)arg0 fileData:(id)arg1 ;
+(BOOL)writeRetainCount:(NSInteger)arg0 oldMetadata:(id)arg1 to:(id)arg2 ;
+(id)metadataForFile:(id)arg0 ;


@end


#endif