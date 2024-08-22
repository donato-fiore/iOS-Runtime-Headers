// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPREADONLYFILEDATASTORAGE_H
#define TSPREADONLYFILEDATASTORAGE_H

@class NSURL;


#import "TSPFileDataStorage.h"

@interface TSPReadOnlyFileDataStorage : TSPFileDataStorage {
    NSURL *_URL;
}




-(BOOL)readOnly;
-(id)initWithURL:(id)arg0 ;
-(id)writeData:(id)arg0 toPackageWriter:(id)arg1 infoMessage:(*void)arg2 preferredFilename:(id)arg3 shouldRemoveData:(BOOL)arg4 error:(*id)arg5 ;
-(void)performReadWithAccessor:(id)arg0 ;


@end


#endif