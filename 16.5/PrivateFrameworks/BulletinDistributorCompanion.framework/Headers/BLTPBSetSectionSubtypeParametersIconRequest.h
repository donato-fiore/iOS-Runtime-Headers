// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTPBSETSECTIONSUBTYPEPARAMETERSICONREQUEST_H
#define BLTPBSETSECTIONSUBTYPEPARAMETERSICONREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "BLTPBSectionIcon.h"

@interface BLTPBSetSectionSubtypeParametersIconRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL defaultSubtype; // ivar: _defaultSubtype
@property (nonatomic) BOOL hasDefaultSubtype;
@property (readonly, nonatomic) BOOL hasIcon;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (nonatomic) BOOL hasSubtypeID;
@property (retain, nonatomic) BLTPBSectionIcon *icon; // ivar: _icon
@property (retain, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (nonatomic) NSUInteger subtypeID; // ivar: _subtypeID


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