// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPCPRIVATELISTENINGSTATEUSERIDENTITYSOURCE_H
#define _MPCPRIVATELISTENINGSTATEUSERIDENTITYSOURCE_H

@class ICUserIdentity, NSNumber;


#import "MPCPrivateListeningStateSource.h"

@interface _MPCPrivateListeningStateUserIdentitySource : MPCPrivateListeningStateSource {
    ICUserIdentity *_userIdentity;
    NSNumber *_cachedValue;
}




+(BOOL)supportsSecureCoding;
+(id)sharedAccessQueue;
-(NSInteger)sourceType;
-(id)_initWithUserIdentity:(id)arg0 ;
-(id)currentValue;
-(id)initWithCoder:(id)arg0 ;
-(void)_handleHomeUserPrivateListeningDidChangeNotification:(id)arg0 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg0 ;
-(void)_loadCurrentValueFromIdentityProperties;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif