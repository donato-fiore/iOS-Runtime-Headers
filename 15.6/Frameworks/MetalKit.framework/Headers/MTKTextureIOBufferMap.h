// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTKTEXTUREIOBUFFERMAP_H
#define MTKTEXTUREIOBUFFERMAP_H

@class NSString;
@protocol TXRBufferMap;

#import <Foundation/Foundation.h>


@interface MTKTextureIOBufferMap : NSObject <TXRBufferMap>

 {
    *void _bytes;
}


@property (readonly, nonatomic) *void bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithContents:(*void)arg0 ;


@end


#endif