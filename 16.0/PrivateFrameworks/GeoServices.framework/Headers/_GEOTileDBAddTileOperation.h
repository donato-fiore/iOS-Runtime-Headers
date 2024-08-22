// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOTILEDBADDTILEOPERATION_H
#define _GEOTILEDBADDTILEOPERATION_H

@class NSString, NSUUID;
@protocol _GEOTileDBWriteOperation;

#import <Foundation/Foundation.h>

#import "GEOTileData.h"

@interface _GEOTileDBAddTileOperation : NSObject <_GEOTileDBWriteOperation>

 {
    _GEOTileKey _key;
    ? _tileSet;
    GEOTileData *_data;
    NSString *_ETag;
    NSUUID *_externalResourceUUID;
    NSString *_subscriptionIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *_GEOTileKey key;
@property (readonly, nonatomic) unsigned char reason; // ivar: _reason
@property (readonly, nonatomic) NSUInteger sizeInBytes;
@property (readonly) Class superclass;


-(BOOL)canIncreaseDataSizeInDB;
-(BOOL)isSupercededByOperation:(id)arg0 ;
-(id)dataForKey:(struct _GEOTileKey *)arg0 ETag:(*id)arg1 originalLoadReason:(*unsigned char)arg2 isKnownNotToExist:(*BOOL)arg3 ;
// -(id)initWithTileKey:(struct _GEOTileKey *)arg0 tileSet:(unk)arg1 data:(unsigned int)arg2 ETag:(struct ? )arg3 reason:(id)arg4 externalResourceUUID:(id)arg5 forSubscriptionWithIdentifier:(unsigned char)arg6  ;
-(void)performWithDB:(id)arg0 ;


@end


#endif