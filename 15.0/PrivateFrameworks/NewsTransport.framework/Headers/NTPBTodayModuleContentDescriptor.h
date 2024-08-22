// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBTODAYMODULECONTENTDESCRIPTOR_H
#define NTPBTODAYMODULECONTENTDESCRIPTOR_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NTPBTodayModuleContentRequest.h"

@interface NTPBTodayModuleContentDescriptor : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NTPBTodayModuleContentRequest *request; // ivar: _request


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