// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCPLDOWNLOADCONTEXT_H
#define PLCPLDOWNLOADCONTEXT_H

@class NSError, NSString;

#import <Foundation/Foundation.h>


@interface PLCPLDownloadContext : NSObject

@property BOOL completed; // ivar: _completed
@property (retain) NSError *error; // ivar: _error
@property CGFloat progress; // ivar: _progress
@property (retain) NSString *resourceTypeDescription; // ivar: _resourceTypeDescription
@property (retain) NSString *taskIdentifier; // ivar: _taskIdentifier
@property CGFloat updateLastQueuedTime; // ivar: _updateLastQueuedTime


-(id)description;
-(void)updateFromDownloadStatusUserInfo:(id)arg0 ;


@end


#endif