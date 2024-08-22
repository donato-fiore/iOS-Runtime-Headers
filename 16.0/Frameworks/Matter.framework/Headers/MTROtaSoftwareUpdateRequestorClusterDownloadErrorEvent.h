// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROTASOFTWAREUPDATEREQUESTORCLUSTERDOWNLOADERROREVENT_H
#define MTROTASOFTWAREUPDATEREQUESTORCLUSTERDOWNLOADERROREVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTROtaSoftwareUpdateRequestorClusterDownloadErrorEvent : NSObject

@property (retain, nonatomic) NSNumber *bytesDownloaded; // ivar: _bytesDownloaded
@property (retain, nonatomic) NSNumber *platformCode; // ivar: _platformCode
@property (retain, nonatomic) NSNumber *progressPercent; // ivar: _progressPercent
@property (retain, nonatomic) NSNumber *softwareVersion; // ivar: _softwareVersion


-(id)description;
-(id)init;


@end


#endif