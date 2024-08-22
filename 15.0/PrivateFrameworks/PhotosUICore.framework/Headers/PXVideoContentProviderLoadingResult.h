// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXVIDEOCONTENTPROVIDERLOADINGRESULT_H
#define PXVIDEOCONTENTPROVIDERLOADINGRESULT_H

@class NSError, AVPlayerItem, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface PXVideoContentProviderLoadingResult : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) AVPlayerItem *playerItem; // ivar: _playerItem
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) NSString *resultDebugDescription; // ivar: _resultDebugDescription
@property (readonly, nonatomic) ? timeRange; // ivar: _timeRange
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)description;
-(id)initWithPlayerItem:(id)arg0 url:(id)arg1 timeRange:(struct ? )arg2 error:(id)arg3 priority:(NSInteger)arg4 description:(id)arg5 ;


@end


#endif