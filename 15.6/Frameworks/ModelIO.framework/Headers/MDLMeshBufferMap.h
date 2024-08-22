// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDLMESHBUFFERMAP_H
#define MDLMESHBUFFERMAP_H


#import <Foundation/Foundation.h>


@interface MDLMeshBufferMap : NSObject {
    id *_deallocator;
}


@property (readonly, nonatomic) *void bytes; // ivar: _bytes


-(id)initWithBytes:(*void)arg0 deallocator:(id)arg1 ;
-(void)dealloc;


@end


#endif