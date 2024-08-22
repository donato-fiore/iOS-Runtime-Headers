// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFAUDIOSESSIONCOORDINATIONSYSTEMINFO_H
#define AFAUDIOSESSIONCOORDINATIONSYSTEMINFO_H

@class NSString, NSUUID;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFAudioSessionCoordinationSystemInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *homeKitMediaSystemIdentifier; // ivar: _homeKitMediaSystemIdentifier
@property (readonly, copy, nonatomic) NSString *homeKitRoomName; // ivar: _homeKitRoomName
@property (readonly, nonatomic) BOOL isSupportedAndEnabled; // ivar: _isSupportedAndEnabled
@property (readonly, copy, nonatomic) NSString *mediaRemoteGroupIdentifier; // ivar: _mediaRemoteGroupIdentifier
@property (readonly, copy, nonatomic) NSString *mediaRemoteRouteIdentifier; // ivar: _mediaRemoteRouteIdentifier
@property (readonly) Class superclass;


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
-(id)initWithIsSupportedAndEnabled:(BOOL)arg0 homeKitRoomName:(id)arg1 homeKitMediaSystemIdentifier:(id)arg2 mediaRemoteGroupIdentifier:(id)arg3 mediaRemoteRouteIdentifier:(id)arg4 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif