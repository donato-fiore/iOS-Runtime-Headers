// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOAPUPLOADSTAGE_H
#define GEOAPUPLOADSTAGE_H


#import <Foundation/Foundation.h>

#import "GEOAPURLSessionConfig.h"

@interface GEOAPUploadStage : NSObject

@property (readonly, nonatomic) CGFloat ttl; // ivar: _ttl
@property (readonly, nonatomic) GEOAPURLSessionConfig *urlSessionConfig; // ivar: _urlSessionConfig


-(id)initWithURLSessionConfig:(id)arg0 ttl:(CGFloat)arg1 ;


@end


#endif