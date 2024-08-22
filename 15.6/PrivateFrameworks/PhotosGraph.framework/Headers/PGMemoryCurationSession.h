// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEMORYCURATIONSESSION_H
#define PGMEMORYCURATIONSESSION_H

@class CLSCurationContext, PHPhotoLibrary;

#import <Foundation/Foundation.h>

#import "PGCurationManager.h"
#import "PGGraphLocationHelper.h"

@interface PGMemoryCurationSession : NSObject

@property (readonly, nonatomic) CLSCurationContext *curationContext; // ivar: _curationContext
@property (readonly, nonatomic) PGCurationManager *curationManager; // ivar: _curationManager
@property (readonly, nonatomic) PGGraphLocationHelper *locationHelper; // ivar: _locationHelper
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(id)initWithCurationManager:(id)arg0 photoLibrary:(id)arg1 curationContext:(id)arg2 locationHelper:(id)arg3 ;


@end


#endif