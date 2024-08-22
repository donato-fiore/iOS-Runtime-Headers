// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOGLORIADB_H
#define GEOGLORIADB_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface GEOGloriaDB : NSObject {
    NSObject<OS_os_log> *_log;
    unique_ptr<gloria::DB, std::default_delete<gloria::DB>> _db;
    TileId _rootTileId;
    Class _metadataClass;
    Class _dataClass;
}




-(BOOL)_unsafeDataForQuadKey:(NSUInteger)arg0 ofType:(Class)arg1 result:(id)arg2 ;
-(BOOL)containsQuadKey:(NSUInteger)arg0 ;
-(BOOL)containsQuadKeyNum:(id)arg0 ;
-(BOOL)enumerateDataAtLocation:(struct ? )arg0 radius:(CGFloat)arg1 visitor:(id)arg2 ;
-(BOOL)enumerateDataAtLocation:(struct ? )arg0 radius:(CGFloat)arg1 zoom:(unsigned char)arg2 visitor:(id)arg3 ;
-(BOOL)unsafeDataForQuadKey:(NSUInteger)arg0 result:(id)arg1 ;
-(BOOL)unsafeDataForQuadKeyNum:(id)arg0 result:(id)arg1 ;
-(BOOL)unsafeEnumerateDataAtLocation:(struct ? )arg0 radius:(CGFloat)arg1 visitor:(id)arg2 ;
-(BOOL)unsafeEnumerateDataAtLocation:(struct ? )arg0 radius:(CGFloat)arg1 zoom:(unsigned char)arg2 visitor:(id)arg3 ;
-(BOOL)unsafeMetadata:(id)arg0 ;
-(id)_dataForQuadKey:(NSUInteger)arg0 ofType:(Class)arg1 ;
-(id)dataForQuadKey:(NSUInteger)arg0 ;
-(id)dataForQuadKeyNum:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 rootQuadKey:(NSUInteger)arg1 log:(id)arg2 ;
-(id)initWithFileURL:(id)arg0 rootQuadKey:(NSUInteger)arg1 metadataClass:(Class)arg2 dataClass:(Class)arg3 log:(id)arg4 ;
-(id)metadata;


@end


#endif