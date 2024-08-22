// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDHYPERLINKREGION_H
#define TSDHYPERLINKREGION_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "TSDBezierPath.h"

@interface TSDHyperlinkRegion : NSObject

@property (retain, nonatomic) NSURL *URL; // ivar: mURL
@property (retain, nonatomic) TSDBezierPath *bezierPath; // ivar: mBezierPath


+(id)hyperlinkRegionWithURL:(id)arg0 bezierPath:(id)arg1 ;
-(id)initWithURL:(id)arg0 bezierPath:(id)arg1 ;
-(void)dealloc;


@end


#endif