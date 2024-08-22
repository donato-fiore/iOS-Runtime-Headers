// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPHOTOKITMEMORYTRIGGER_H
#define PGPHOTOKITMEMORYTRIGGER_H

@class PHPhotoLibrary;


#import "PGMemoryTrigger.h"

@interface PGPhotoKitMemoryTrigger : PGMemoryTrigger

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(id)initWithLoggingConnection:(id)arg0 photoLibrary:(id)arg1 ;


@end


#endif