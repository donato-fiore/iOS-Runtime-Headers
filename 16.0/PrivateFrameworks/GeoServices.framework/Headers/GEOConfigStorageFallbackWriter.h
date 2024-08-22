// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCONFIGSTORAGEFALLBACKWRITER_H
#define GEOCONFIGSTORAGEFALLBACKWRITER_H

@class NSString;
@protocol GEOConfigStorageReadWrite;


#import "GEOConfigStorageFallbackReader.h"

@interface GEOConfigStorageFallbackWriter : GEOConfigStorageFallbackReader <GEOConfigStorageReadWrite>

 {
    id<GEOConfigStorageReadWrite> *_writer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStorage:(id)arg0 writer:(id)arg1 ;
-(void)setConfigValue:(id)arg0 forKey:(id)arg1 options:(NSUInteger)arg2 synchronous:(BOOL)arg3 ;


@end


#endif