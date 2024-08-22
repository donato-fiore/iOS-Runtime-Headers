// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTSTICKERRECORD_H
#define AVTSTICKERRECORD_H

@class NSString, NSNumber;
@protocol AVTStickerRecord, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AVTStickerRecord : NSObject <AVTStickerRecord, NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *avatarRecordIdentifier; // ivar: _avatarRecordIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSNumber *frequencySum; // ivar: _frequencySum
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSNumber *serializationVersion; // ivar: _serializationVersion
@property (readonly, copy, nonatomic) NSString *stickerConfigurationIdentifier; // ivar: _stickerConfigurationIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)matchingIdentifierTest:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 avatarRecordIdentifier:(id)arg1 stickerConfigurationIdentifier:(id)arg2 frequencySum:(id)arg3 serializationVersion:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif