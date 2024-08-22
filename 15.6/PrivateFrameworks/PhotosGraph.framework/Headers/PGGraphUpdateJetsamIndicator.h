// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHUPDATEJETSAMINDICATOR_H
#define PGGRAPHUPDATEJETSAMINDICATOR_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface PGGraphUpdateJetsamIndicator : NSObject

@property (nonatomic) BOOL indicatorExists; // ivar: _indicatorExists
@property (readonly, nonatomic) NSURL *indicatorURL; // ivar: _indicatorURL
@property (nonatomic) NSInteger maxRetryCount; // ivar: _maxRetryCount
@property (nonatomic) NSInteger retryCount; // ivar: _retryCount
@property (readonly, nonatomic) BOOL updateDidCauseJetsam;


-(id)description;
-(id)initWithIndicatorDirectoryURL:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_readIndicator;
-(void)_removeIndicator;
-(void)clear;
-(void)markUpdate;


@end


#endif