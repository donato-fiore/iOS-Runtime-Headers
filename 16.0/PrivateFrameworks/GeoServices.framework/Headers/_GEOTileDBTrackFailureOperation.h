// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOTILEDBTRACKFAILUREOPERATION_H
#define _GEOTILEDBTRACKFAILUREOPERATION_H

@class NSString;
@protocol _GEOTileDBWriteOperation;

#import <Foundation/Foundation.h>


@interface _GEOTileDBTrackFailureOperation : NSObject <_GEOTileDBWriteOperation>

 {
    _GEOTileKey _key;
    ? _tileSet;
    BOOL _shouldProactivelyLoad;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *_GEOTileKey key;
@property (readonly, nonatomic) NSUInteger sizeInBytes;
@property (readonly) Class superclass;


-(BOOL)canIncreaseDataSizeInDB;
-(BOOL)isSupercededByOperation:(id)arg0 ;
-(id)dataForKey:(struct _GEOTileKey *)arg0 ETag:(*id)arg1 originalLoadReason:(*unsigned char)arg2 isKnownNotToExist:(*BOOL)arg3 ;
// -(id)initWithTileKey:(struct _GEOTileKey *)arg0 tileSet:(unk)arg1 shouldProactivelyLoad:(unsigned int)arg2  ;
-(void)performWithDB:(id)arg0 ;


@end


#endif