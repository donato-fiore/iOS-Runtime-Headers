// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYLOCATIONSTATUS_H
#define PFUBIQUITYLOCATIONSTATUS_H

@class NSError;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"

@interface PFUbiquityLocationStatus : NSObject {
    BOOL _isLive;
    BOOL _isDeleted;
    BOOL _isDownloaded;
    BOOL _isDownloading;
    BOOL _isUploaded;
    BOOL _isUploading;
    BOOL _isImported;
    BOOL _isScheduled;
    BOOL _isExported;
    BOOL _isFailed;
    PFUbiquityLocation *_location;
    NSError *_error;
    NSUInteger _hash;
    NSInteger _numBytes;
    NSInteger _numNotifications;
}




-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithLocation:(id)arg0 ;
-(void)dealloc;


@end


#endif