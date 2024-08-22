// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSBINARYOBJECTSTOREFILE_H
#define NSBINARYOBJECTSTOREFILE_H

@class NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NSBinaryObjectStoreFile : NSObject {
    int _databaseVersion;
    NSDictionary *_fullMetadata;
    NSUInteger _primaryKeyGeneration;
    NSMutableDictionary *_mapData;
    NSDictionary *_storeOptions;
}




-(BOOL)_writeMetadataData:(id)arg0 andMapDataData:(id)arg1 toFile:(id)arg2 error:(*id)arg3 ;
-(void)dealloc;


@end


#endif