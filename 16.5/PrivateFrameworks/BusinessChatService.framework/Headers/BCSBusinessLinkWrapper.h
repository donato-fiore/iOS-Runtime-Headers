// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSBUSINESSLINKWRAPPER_H
#define BCSBUSINESSLINKWRAPPER_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "BCSBusinessLinkMessage.h"

@interface BCSBusinessLinkWrapper : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMessage;
@property (nonatomic) BOOL hasModTime;
@property (readonly, nonatomic) BOOL hasOrgId;
@property (retain, nonatomic) BCSBusinessLinkMessage *message; // ivar: _message
@property (nonatomic) NSInteger modTime; // ivar: _modTime
@property (retain, nonatomic) NSString *orgId; // ivar: _orgId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif