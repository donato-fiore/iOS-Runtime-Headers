// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENDOWNLOADENDPOINT_H
#define ENDOWNLOADENDPOINT_H

@class ENRegion, NSURL;

#import <Foundation/Foundation.h>


@interface ENDownloadEndpoint : NSObject

@property (readonly, nonatomic) CGFloat downloadInterval; // ivar: _downloadInterval
@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, copy, nonatomic) ENRegion *region; // ivar: _region
@property (readonly, copy, nonatomic) NSURL *serverBaseURL; // ivar: _serverBaseURL
@property (readonly, copy, nonatomic) NSURL *serverIndexURL; // ivar: _serverIndexURL


-(id)initWithBaseURL:(id)arg0 indexURL:(id)arg1 interval:(CGFloat)arg2 enabled:(BOOL)arg3 region:(id)arg4 ;
-(id)serverURLForFileWithRelativePath:(id)arg0 ;


@end


#endif