// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEAUTHORIZATIONREQUESTMESSAGE_H
#define HDCODABLEAUTHORIZATIONREQUESTMESSAGE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface HDCodableAuthorizationRequestMessage : PBCodable <NSCopying>

 {
    ? _typesToReads;
    ? _typesToWrites;
}


@property (retain, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, nonatomic) BOOL hasAppBundleIdentifier;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSData *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, nonatomic) *NSInteger typesToReads;
@property (readonly, nonatomic) NSUInteger typesToReadsCount;
@property (readonly, nonatomic) *NSInteger typesToWrites;
@property (readonly, nonatomic) NSUInteger typesToWritesCount;


+(id)codableAuthorizationRequestWithRecord:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)typesToReadAtIndex:(NSUInteger)arg0 ;
-(NSInteger)typesToWriteAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedReadTypes;
-(id)decodedWriteTypes;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addTypesToRead:(NSInteger)arg0 ;
-(void)addTypesToWrite:(NSInteger)arg0 ;
-(void)clearTypesToReads;
-(void)clearTypesToWrites;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif