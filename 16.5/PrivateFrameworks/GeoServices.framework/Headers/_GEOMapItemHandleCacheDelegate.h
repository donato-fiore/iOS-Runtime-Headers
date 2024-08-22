// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOMAPITEMHANDLECACHEDELEGATE_H
#define _GEOMAPITEMHANDLECACHEDELEGATE_H

@class NSString;
@protocol NSCacheDelegate;

#import <Foundation/Foundation.h>


@interface _GEOMapItemHandleCacheDelegate : NSObject <NSCacheDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;


@end


#endif