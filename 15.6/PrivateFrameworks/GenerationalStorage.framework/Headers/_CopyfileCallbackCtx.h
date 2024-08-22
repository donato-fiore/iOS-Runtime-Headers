// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _COPYFILECALLBACKCTX_H
#define _COPYFILECALLBACKCTX_H

@class NSProgress;

#import <Foundation/Foundation.h>


@interface _CopyfileCallbackCtx : NSObject

@property (nonatomic) BOOL doArchive; // ivar: _doArchive
@property (nonatomic) BOOL doUnarchive; // ivar: _doUnarchive
@property (nonatomic) NSUInteger generationSize; // ivar: _generationSize
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress


-(id)initWithPath:(char *)arg0 error:(*id)arg1 ;


@end


#endif