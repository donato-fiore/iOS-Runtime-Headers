// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCSSHAREPROTECTIONOBJECT_H
#define PCSSHAREPROTECTIONOBJECT_H


#import <Foundation/Foundation.h>


@interface PCSShareProtectionObject : NSObject {
    *_PCSIdentityData _identity;
}


@property (readonly, nonatomic) *_OpaquePCSShareProtection shareProtection; // ivar: _shareProtection


-(?)initWithShareProtectionRef;
-(id)exportAcceptedSharingRequestWithError:(*id)arg0 ;
-(id)initWithSharingRequestData:(id)arg0 identitySet:(struct _PCSIdentitySetData *)arg1 error:(*id)arg2 ;
-(id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData *)arg0 error:(*id)arg1 ;
-(id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData *)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
-(id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData *)arg0 owner:(*void)arg1 flags:(unsigned int)arg2 error:(*id)arg3 ;
-(void)dealloc;


@end


#endif