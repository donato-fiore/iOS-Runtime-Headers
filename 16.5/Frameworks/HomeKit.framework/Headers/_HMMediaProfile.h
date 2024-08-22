// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMMEDIAPROFILE_H
#define _HMMEDIAPROFILE_H

@class NSString;
@protocol _HMMediaProfileDelegate;


#import "HMAccessoryProfile.h"
#import "HMMediaSession.h"

@interface _HMMediaProfile : HMAccessoryProfile

@property (nonatomic) NSUInteger capability; // ivar: _capability
@property (weak) NSObject<_HMMediaProfileDelegate> *delegate; // ivar: _delegate
@property (retain) HMMediaSession *mediaSession; // ivar: _mediaSession
@property (readonly) NSString *routeUID; // ivar: _routeUID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)__configureWithContext:(id)arg0 accessory:(id)arg1 ;
-(void)_notifyDelegateOfUpdatedMediaSession:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleRuntimeStateUpdate:(id)arg0 ;


@end


#endif