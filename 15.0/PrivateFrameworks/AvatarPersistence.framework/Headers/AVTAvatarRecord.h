// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARRECORD_H
#define AVTAVATARRECORD_H

@class NSData, NSString, NSDate;
@protocol AVTAvatarRecordInternal, AVTAvatarRecord;

#import <Foundation/Foundation.h>


@interface AVTAvatarRecord : NSObject <AVTAvatarRecordInternal, AVTAvatarRecord>



@property (retain, nonatomic) NSData *avatarData; // ivar: _avatarData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDate *orderDate; // ivar: _orderDate
@property (readonly, nonatomic, getter=isPuppet) BOOL puppet;
@property (readonly) Class superclass;


+(BOOL)canLoadAvatarWithData:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)dataForNeutralRecord;
+(id)dataForNewRecord;
+(id)defaultAvatarRecord;
+(id)matchingIdentifierTest:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithAvatarData:(id)arg0 ;
-(id)initWithAvatarData:(id)arg0 identifier:(id)arg1 orderDate:(id)arg2 ;
-(id)initWithAvatarData:(id)arg0 orderDate:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif