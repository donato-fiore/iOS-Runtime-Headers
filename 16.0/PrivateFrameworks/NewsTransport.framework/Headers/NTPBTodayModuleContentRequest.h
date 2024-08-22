// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBTODAYMODULECONTENTREQUEST_H
#define NTPBTODAYMODULECONTENTREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface NTPBTodayModuleContentRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasModuleDescriptorType;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasNameColorDark;
@property (readonly, nonatomic) BOOL hasNameColorLight;
@property (readonly, nonatomic) BOOL hasTagID;
@property (nonatomic) int moduleDescriptorType; // ivar: _moduleDescriptorType
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *nameColorDark; // ivar: _nameColorDark
@property (retain, nonatomic) NSString *nameColorLight; // ivar: _nameColorLight
@property (retain, nonatomic) NSString *tagID; // ivar: _tagID


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