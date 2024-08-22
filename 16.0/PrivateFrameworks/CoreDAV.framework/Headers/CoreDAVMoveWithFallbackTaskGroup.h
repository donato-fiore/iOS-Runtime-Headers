// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVMOVEWITHFALLBACKTASKGROUP_H
#define COREDAVMOVEWITHFALLBACKTASKGROUP_H

@class NSString, NSData, NSURL, NSDictionary;


#import "CoreDAVTaskGroup.h"

@interface CoreDAVMoveWithFallbackTaskGroup : CoreDAVTaskGroup

@property (retain, nonatomic) NSString *dataContentType; // ivar: _dataContentType
@property (retain, nonatomic) NSData *dataPayload; // ivar: _dataPayload
@property (readonly, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (readonly, nonatomic) NSString *nextETag; // ivar: _nextETag
@property (nonatomic) int overwrite; // ivar: _overwrite
@property (retain, nonatomic) NSString *previousETag; // ivar: _previousETag
@property (readonly, nonatomic) NSDictionary *responseHeaders; // ivar: _responseHeaders
@property (readonly, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (nonatomic) BOOL useFallback; // ivar: _useFallback


-(id)description;
-(id)initWithSourceURL:(id)arg0 destinationURL:(id)arg1 AccountInfoProvider:(id)arg2 taskManager:(id)arg3 ;
-(void)_completedMoveTask:(id)arg0 ;
-(void)_completedPutTask:(id)arg0 ;
-(void)startTaskGroup;


@end


#endif