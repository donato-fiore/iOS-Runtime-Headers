// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXUSERNOTIFICATIONDERIVEDDATA_H
#define ATXUSERNOTIFICATIONDERIVEDDATA_H

@class NSMutableArray, NSArray;
@protocol NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXUserNotificationDerivedData : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSCopying>

 {
    NSMutableArray *_internalScores;
}


@property (readonly, nonatomic, getter=getPublicScores) NSArray *scores;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXUserNotificationDerivedData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initFromJSON:(id)arg0 ;
-(id)initFromModelScores:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonRepresentation;
-(id)proto;
-(void)addScore:(id)arg0 ;
-(void)addScores:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif