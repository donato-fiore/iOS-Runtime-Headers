// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDHYPERLINKREGION_H
#define TSDHYPERLINKREGION_H

@class NSURL, TSUBezierPath;

#import <Foundation/Foundation.h>


@interface TSDHyperlinkRegion : NSObject

@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy, nonatomic) TSUBezierPath *bezierPath; // ivar: _bezierPath


+(id)hyperlinkRegionWithURL:(id)arg0 bezierPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithURL:(id)arg0 bezierPath:(id)arg1 ;


@end


#endif