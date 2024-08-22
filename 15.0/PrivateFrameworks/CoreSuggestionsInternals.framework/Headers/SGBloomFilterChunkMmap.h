// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGBLOOMFILTERCHUNKMMAP_H
#define SGBLOOMFILTERCHUNKMMAP_H

@class NSString;
@protocol SGBloomFilterChunk;

#import <Foundation/Foundation.h>


@interface SGBloomFilterChunkMmap : NSObject <SGBloomFilterChunk>

 {
    NSString *_path;
    int _fd;
    *unsigned int _countPtr;
    unsigned int _mask;
    char * _buf;
}


@property (readonly, nonatomic) unsigned int count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *path;
@property (readonly) Class superclass;


// -(BOOL)exists:(unk)arg0  ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
// -(void)add:(unk)arg0  ;
-(void)close;
-(void)dealloc;


@end


#endif