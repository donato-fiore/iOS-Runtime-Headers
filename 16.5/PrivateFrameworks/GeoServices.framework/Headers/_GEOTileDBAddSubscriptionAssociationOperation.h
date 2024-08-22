// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOTILEDBADDSUBSCRIPTIONASSOCIATIONOPERATION_H
#define _GEOTILEDBADDSUBSCRIPTIONASSOCIATIONOPERATION_H

@class NSString;
@protocol _GEOTileDBWriteOperation;

#import <Foundation/Foundation.h>


@interface _GEOTileDBAddSubscriptionAssociationOperation : NSObject <_GEOTileDBWriteOperation>

 {
    _GEOTileKey _key;
    NSString *_subscriptionIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger sizeInBytes;
@property (readonly) Class superclass;


-(BOOL)canIncreaseDataSizeInDB;
-(BOOL)isSupercededByOperation:(id)arg0 ;
-(id)dataForKey:(struct _GEOTileKey *)arg0 ETag:(*id)arg1 originalLoadReason:(*unsigned char)arg2 isKnownNotToExist:(*BOOL)arg3 ;
-(id)initWithTileKey:(struct _GEOTileKey *)arg0 subscriptionIdentifier:(id)arg1 ;
-(struct _GEOTileKey *)key;
-(void)performWithDB:(id)arg0 ;


@end


#endif