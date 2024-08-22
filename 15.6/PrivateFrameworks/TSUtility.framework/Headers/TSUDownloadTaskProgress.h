// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUDOWNLOADTASKPROGRESS_H
#define TSUDOWNLOADTASKPROGRESS_H


#import <Foundation/Foundation.h>


@interface TSUDownloadTaskProgress : NSObject

@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (nonatomic) NSInteger totalBytesDownloaded; // ivar: _totalBytesDownloaded
@property (nonatomic) NSInteger totalBytesExpectedToBeDownloaded; // ivar: _totalBytesExpectedToBeDownloaded


-(id)description;


@end


#endif