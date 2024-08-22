// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9COHERENCE15CRSTRINGENCODER_H
#define _TTC9COHERENCE15CRSTRINGENCODER_H


#import <Foundation/Foundation.h>


@interface _TtC9Coherence15CRStringEncoder : NSObject {
    ? sequence;
    ? subsequence;
    ? encoder;
}




-(id)init;
-(void)addAddedById:(id)arg0 clock:(unsigned int)arg1 ;
-(void)addChildWithId:(unsigned int)arg0 ;
-(void)finishSubstring;
-(void)setCharWithId:(id)arg0 clock:(unsigned int)arg1 ;
-(void)setStorage:(id)arg0 ;
-(void)setWithAddedByVersion:(id)arg0 ;
-(void)setWithLength:(unsigned int)arg0 ;
-(void)setWithVersion:(id)arg0 ;


@end


#endif