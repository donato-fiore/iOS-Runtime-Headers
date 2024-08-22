// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXMEDIAREADERDEPTHDATA_H
#define JFXMEDIAREADERDEPTHDATA_H

@class AVDepthData;

#import <Foundation/Foundation.h>


@interface JFXMediaReaderDepthData : NSObject

@property (readonly, nonatomic) AVDepthData *avDepthData; // ivar: _avDepthData
@property (readonly, nonatomic) ? timeRange; // ivar: _timeRange


-(id)initWithAVDepthData:(id)arg0 timeRange:(struct ? )arg1 ;


@end


#endif