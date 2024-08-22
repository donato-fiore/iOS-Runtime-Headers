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
-(BOOL)writeToBundleWriter:(id)arg0 preferredFilename:(id)arg1 filename:(*id)arg2 didCopyDataToBundle:(*BOOL)arg3 ;
-(id)initWithURL:(id)arg0 ;
-(void)performReadWithAccessor:(id)arg0 ;


@end


#endif