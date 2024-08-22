// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKCLOUDUPLOADRESULTS_H
#define DKCLOUDUPLOADRESULTS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "DKCloudUploadResult.h"

@interface DKCloudUploadResults : NSObject

@property (retain, nonatomic) NSArray *backupResults; // ivar: _backupResults
@property (retain, nonatomic) DKCloudUploadResult *syncResult; // ivar: _syncResult


-(BOOL)success;


@end


#endif