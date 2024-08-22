// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFCOMPANIONDEVICEINFO_H
#define AFCOMPANIONDEVICEINFO_H

@class NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFCompanionDeviceInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy, nonatomic) NSString *aceHost; // ivar: _aceHost
@property (readonly, copy, nonatomic) NSString *assistantID; // ivar: _assistantID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *idsIdentifier; // ivar: _idsIdentifier
@property (readonly, nonatomic) BOOL muxSupportCapability; // ivar: _muxSupportCapability
@property (readonly, nonatomic) BOOL peerToPeerHandoffCapability; // ivar: _peerToPeerHandoffCapability
@property (readonly, copy, nonatomic) NSString *productPrefix; // ivar: _productPrefix
@property (readonly, copy, nonatomic) NSString *speechID; // ivar: _speechID
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *syncMetadata; // ivar: _syncMetadata
@property (readonly, nonatomic) BOOL syncMetadataCapability; // ivar: _syncMetadataCapability


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAssistantID:(id)arg0 speechID:(id)arg1 idsIdentifier:(id)arg2 productPrefix:(id)arg3 aceHost:(id)arg4 syncMetadata:(id)arg5 syncMetadataCapability:(BOOL)arg6 peerToPeerHandoffCapability:(BOOL)arg7 muxSupportCapability:(BOOL)arg8 ;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif