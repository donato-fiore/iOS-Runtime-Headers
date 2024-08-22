// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPTPANALYTICSDATA_H
#define PLPTPANALYTICSDATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLPTPAnalyticsData : NSObject

@property (nonatomic) NSInteger cplState; // ivar: _cplState
@property (nonatomic) NSUInteger deferredRenderCount; // ivar: _deferredRenderCount
@property (nonatomic) NSUInteger downloadedCount; // ivar: _downloadedCount
@property (nonatomic) NSUInteger imageTranscodedCount; // ivar: _imageTranscodedCount
@property (nonatomic) NSUInteger libraryAssetCount; // ivar: _libraryAssetCount
@property (copy, nonatomic) NSString *make; // ivar: _make
@property (copy, nonatomic) NSString *os; // ivar: _os
@property (copy, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (nonatomic) CGFloat timeConnected; // ivar: _timeConnected
@property (nonatomic) CGFloat timeDisconnected; // ivar: _timeDisconnected
@property (copy, nonatomic) NSString *transport; // ivar: _transport
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid
@property (nonatomic) NSUInteger videoTranscodedCount; // ivar: _videoTranscodedCount


-(id)description;
-(id)init;
-(void)incrementConversionCountForAssetType:(short)arg0 ;
-(void)report;
-(void)updateWithHostCharacteristics:(id)arg0 ;


@end


#endif