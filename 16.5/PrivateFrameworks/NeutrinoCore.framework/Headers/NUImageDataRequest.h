// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUIMAGEDATAREQUEST_H
#define NUIMAGEDATAREQUEST_H

@class NSString, NSDictionary;


#import "NUImageRenderRequest.h"

@interface NUImageDataRequest : NUImageRenderRequest

@property (copy) NSString *dataExtractor; // ivar: _dataExtractor
@property (copy) NSDictionary *options; // ivar: _options


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)initWithComposition:(id)arg0 dataExtractor:(id)arg1 options:(id)arg2 ;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 dataExtractor:(id)arg1 options:(id)arg2 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif