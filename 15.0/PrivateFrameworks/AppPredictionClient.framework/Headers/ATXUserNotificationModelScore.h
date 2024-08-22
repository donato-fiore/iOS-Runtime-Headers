// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXUSERNOTIFICATIONMODELSCORE_H
#define ATXUSERNOTIFICATIONMODELSCORE_H

@class NSString, NSData, NSUUID;
@protocol NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol;

#import <Foundation/Foundation.h>


@interface ATXUserNotificationModelScore : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>



@property (readonly, nonatomic) NSString *modelId; // ivar: _modelId
@property (readonly, nonatomic) NSUInteger modelVersion; // ivar: _modelVersion
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) NSData *scoreInfo; // ivar: _scoreInfo
@property (readonly, nonatomic) CGFloat scoreTimestamp; // ivar: _scoreTimestamp
@property (readonly, nonatomic) NSUUID *scoreUUID; // ivar: _scoreUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXUserNotificationModelScore:(id)arg0 ;
-(id)encodeAsProto;
-(id)initFromJSON:(id)arg0 ;
-(id)initFromModelScoreData:(id)arg0 modelVersion:(NSUInteger)arg1 score:(CGFloat)arg2 scoreTimestamp:(CGFloat)arg3 scoreUUID:(id)arg4 scoreInfo:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonRepresentation;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif