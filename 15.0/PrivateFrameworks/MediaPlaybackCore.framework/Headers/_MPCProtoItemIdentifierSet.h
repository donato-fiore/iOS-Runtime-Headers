// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCPROTOITEMIDENTIFIERSET_H
#define _MPCPROTOITEMIDENTIFIERSET_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MPCProtoItemIdentifierSet : PBCodable <NSCopying>

 {
    NSInteger _cloudID;
    NSInteger _delegateInfoID;
    NSInteger _purchaseHistoryID;
    NSInteger _storeAdamID;
    NSInteger _storeSubscriptionAdamID;
    NSString *_cloudUniversalLibraryID;
    NSString *_contentItemID;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif