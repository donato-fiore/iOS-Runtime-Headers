// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUNKNOWNFIELDS_H
#define PBUNKNOWNFIELDS_H


#import <Foundation/Foundation.h>


@interface PBUnknownFields : NSObject {
    char * _buf;
    NSUInteger _bufSpace;
    NSUInteger _bufLen;
    NSUInteger _recursionDepth;
}




-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif