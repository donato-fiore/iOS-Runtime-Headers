// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIFILE_H
#define TRIFILE_H

@class NSString;


#import "TRIPBMessage.h"
#import "TRIAsset.h"

@interface TRIFile : TRIPBMessage

@property (retain, nonatomic) TRIAsset *asset;
@property (nonatomic) BOOL hasAsset;
@property (nonatomic) BOOL hasIsOnDemand;
@property (nonatomic) BOOL hasPath;
@property (nonatomic) BOOL isOnDemand;
@property (copy, nonatomic) NSString *path;


+(id)descriptor;
-(BOOL)requiresDownload;


@end


#endif