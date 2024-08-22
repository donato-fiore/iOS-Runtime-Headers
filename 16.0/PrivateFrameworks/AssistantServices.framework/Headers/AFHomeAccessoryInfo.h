// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFHOMEACCESSORYINFO_H
#define AFHOMEACCESSORYINFO_H

@class NSString, NSUUID;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFHomeAccessoryInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (readonly, copy, nonatomic) NSString *categoryType; // ivar: _categoryType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasActiveThirdPartyMusicSubscription; // ivar: _hasActiveThirdPartyMusicSubscription
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSpeaker; // ivar: _isSpeaker
@property (readonly, copy, nonatomic) NSUUID *loggingUniqueIdentifier; // ivar: _loggingUniqueIdentifier
@property (readonly, copy, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (readonly, copy, nonatomic) NSString *model; // ivar: _model
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *roomName; // ivar: _roomName
@property (readonly, nonatomic) NSInteger schemaCategoryType; // ivar: _schemaCategoryType
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 loggingUniqueIdentifier:(id)arg1 name:(id)arg2 model:(id)arg3 roomName:(id)arg4 assistantIdentifier:(id)arg5 isSpeaker:(BOOL)arg6 hasActiveThirdPartyMusicSubscription:(BOOL)arg7 manufacturer:(id)arg8 categoryType:(id)arg9 schemaCategoryType:(NSInteger)arg10 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif