// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBSECTIONDISPLAYDESCRIPTOR_H
#define NTPBSECTIONDISPLAYDESCRIPTOR_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBSectionDisplayDescriptor : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *actionTitle; // ivar: _actionTitle
@property (retain, nonatomic) NSString *actionURLString; // ivar: _actionURLString
@property (retain, nonatomic) NSString *backgroundColorDark; // ivar: _backgroundColorDark
@property (retain, nonatomic) NSString *backgroundColorLight; // ivar: _backgroundColorLight
@property (retain, nonatomic) NSString *backgroundGradientColor; // ivar: _backgroundGradientColor
@property (readonly, nonatomic) BOOL hasActionTitle;
@property (readonly, nonatomic) BOOL hasActionURLString;
@property (readonly, nonatomic) BOOL hasBackgroundColorDark;
@property (readonly, nonatomic) BOOL hasBackgroundColorLight;
@property (readonly, nonatomic) BOOL hasBackgroundGradientColor;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasNameActionURLString;
@property (readonly, nonatomic) BOOL hasNameColorDark;
@property (readonly, nonatomic) BOOL hasNameColorLight;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *nameActionURLString; // ivar: _nameActionURLString
@property (retain, nonatomic) NSString *nameColorDark; // ivar: _nameColorDark
@property (retain, nonatomic) NSString *nameColorLight; // ivar: _nameColorLight


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif