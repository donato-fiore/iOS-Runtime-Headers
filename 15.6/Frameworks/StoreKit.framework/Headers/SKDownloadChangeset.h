// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKDOWNLOADCHANGESET_H
#define SKDOWNLOADCHANGESET_H

@class NSNumber, NSURL, NSError;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKDownloadChangeset : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *contentLength; // ivar: _contentLength
@property (copy, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (copy, nonatomic) NSNumber *downloadID; // ivar: _downloadID
@property (copy, nonatomic) NSNumber *downloadState; // ivar: _downloadState
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSNumber *progress; // ivar: _progress
@property (copy, nonatomic) NSNumber *timeRemaining; // ivar: _timeRemaining


+(id)changesetWithDownloadID:(id)arg0 state:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif