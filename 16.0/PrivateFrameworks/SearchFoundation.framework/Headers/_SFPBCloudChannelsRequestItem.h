// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBCLOUDCHANNELSREQUESTITEM_H
#define _SFPBCLOUDCHANNELSREQUESTITEM_H

@class PBCodable, NSString, NSData;
@protocol _SFPBCloudChannelsRequestItem, NSSecureCoding;



@interface _SFPBCloudChannelsRequestItem : PBCodable <_SFPBCloudChannelsRequestItem, NSSecureCoding>



@property (copy, nonatomic) NSString *channelIdentifier; // ivar: _channelIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *pushTopic; // ivar: _pushTopic
@property (copy, nonatomic) NSString *subscribedEntityIdentifier; // ivar: _subscribedEntityIdentifier
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif