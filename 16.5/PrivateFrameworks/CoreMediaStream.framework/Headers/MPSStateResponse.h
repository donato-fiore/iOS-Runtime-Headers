// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSSTATERESPONSE_H
#define MPSSTATERESPONSE_H

@class PBCodable;
@protocol NSCopying;



@interface MPSStateResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIcplAction;
@property (nonatomic) BOOL hasMpsAction;
@property (nonatomic) BOOL hasRetryAfterSeconds;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int icplAction; // ivar: _icplAction
@property (nonatomic) int mpsAction; // ivar: _mpsAction
@property (nonatomic) NSInteger retryAfterSeconds; // ivar: _retryAfterSeconds
@property (nonatomic) NSInteger version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)icplActionAsString:(int)arg0 ;
-(id)mpsActionAsString:(int)arg0 ;
-(int)StringAsIcplAction:(id)arg0 ;
-(int)StringAsMpsAction:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif