// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMEDIADATASTORAGE_H
#define AVMEDIADATASTORAGE_H


#import <Foundation/Foundation.h>

#import "AVMediaDataStorageInternal.h"

@interface AVMediaDataStorage : NSObject {
    AVMediaDataStorageInternal *_mediaDataStorageInternal;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)URL;
-(id)description;
-(id)init;
-(id)initWithURL:(id)arg0 options:(id)arg1 ;


@end


#endif