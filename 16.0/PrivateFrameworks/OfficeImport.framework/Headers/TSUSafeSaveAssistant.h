// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUSAFESAVEASSISTANT_H
#define TSUSAFESAVEASSISTANT_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "OITSUTemporaryDirectory.h"

@interface TSUSafeSaveAssistant : NSObject {
    NSURL *_saveURL;
    OITSUTemporaryDirectory *_temporaryDirectory;
}


@property (readonly, nonatomic) NSURL *writeURL; // ivar: _writeURL


+(BOOL)finishWritingToURL:(id)arg0 byMovingOrCopyingItemAtURL:(id)arg1 addingAttributes:(id)arg2 error:(*id)arg3 ;
+(void)writeAttributes:(id)arg0 toURL:(id)arg1 ;
-(BOOL)endSaveWithSuccess:(BOOL)arg0 addingAttributes:(id)arg1 error:(*id)arg2 ;
-(BOOL)endSaveWithSuccess:(BOOL)arg0 toURL:(id)arg1 addingAttributes:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initForSavingToURL:(id)arg0 error:(*id)arg1 ;


@end


#endif