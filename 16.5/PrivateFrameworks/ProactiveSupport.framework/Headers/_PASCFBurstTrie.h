// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASCFBURSTTRIE_H
#define _PASCFBURSTTRIE_H


#import <Foundation/Foundation.h>


@interface _PASCFBurstTrie : NSObject {
    *_CFBurstTrie _trie;
}




-(id)init;
-(id)initWithPath:(id)arg0 ;
-(unsigned int)payloadForString:(id)arg0 ;
-(unsigned int)payloadForString:(id)arg0 range:(struct _NSRange )arg1 ;
-(unsigned int)payloadForUTF8String:(char *)arg0 length:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)runBlockWithTrie:(id)arg0 ;


@end


#endif