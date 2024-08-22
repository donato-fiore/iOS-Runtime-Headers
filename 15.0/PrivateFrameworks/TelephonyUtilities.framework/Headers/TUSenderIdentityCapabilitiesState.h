// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUSENDERIDENTITYCAPABILITIESSTATE_H
#define TUSENDERIDENTITYCAPABILITIESSTATE_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying;

#import <Foundation/Foundation.h>

#import "TUCTCapabilitiesState.h"
#import "TUThumperCTCapabilitiesState.h"

@interface TUSenderIdentityCapabilitiesState : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>



@property (copy, nonatomic) TUCTCapabilitiesState *csCallingCapabilitiesState; // ivar: _csCallingCapabilitiesState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *senderIdentityUUID; // ivar: _senderIdentityUUID
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsSimultaneousVoiceAndData; // ivar: _supportsSimultaneousVoiceAndData
@property (copy, nonatomic) TUThumperCTCapabilitiesState *thumperCallingCapabilitiesState; // ivar: _thumperCallingCapabilitiesState
@property (copy, nonatomic) TUCTCapabilitiesState *voLTECallingCapabilitiesState; // ivar: _voLTECallingCapabilitiesState
@property (copy, nonatomic) TUCTCapabilitiesState *wiFiCallingCapabilitiesState; // ivar: _wiFiCallingCapabilitiesState


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSenderIdentityUUID:(id)arg0 ;
-(id)publiclyAccessibleCopy;
-(id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif