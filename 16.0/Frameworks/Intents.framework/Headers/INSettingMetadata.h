// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INSETTINGMETADATA_H
#define INSETTINGMETADATA_H

@class NSString;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INAppIdentifier.h"
#import "INSettingDevice.h"

@interface INSettingMetadata : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *settingId; // ivar: _settingId
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INAppIdentifier *targetApp; // ivar: _targetApp
@property (readonly, copy, nonatomic) INSettingDevice *targetDevice; // ivar: _targetDevice


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSettingId:(id)arg0 targetDevice:(id)arg1 targetApp:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif