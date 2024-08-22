// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPEMBEDDING_H
#define UPEMBEDDING_H


#import <Foundation/Foundation.h>


@interface UPEmbedding : NSObject {
    *void _embedding;
}




-(NSUInteger)getDimension;
-(id)description;
-(id)getCoordinates;
-(id)initWithCoordinates:(id)arg0 ;
-(id)initWithProtobufEmbeddings:(id)arg0 forTokenAt:(int)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif