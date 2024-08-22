// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUDIOCOMPONENTPREFREGCONNECTION_H
#define AUDIOCOMPONENTPREFREGCONNECTION_H

@protocol AudioComponentPreferenceProtocol;

#import <Foundation/Foundation.h>


@interface AudioComponentPrefRegConnection : NSObject <AudioComponentPreferenceProtocol>

 {
    *void mImpl;
    ConnectionInfo mConnInfo;
}




-(BOOL)isGenericAppIcon:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(id)initWithRegistrar:(*void)arg0 connection:(id)arg1 ;
-(void)getComponentUserTags:(id)arg0 reply:(id)arg1 ;
-(void)getExtensionComponentList:(id)arg0 linkedSDKRequiresEntitlement:(BOOL)arg1 reply:(id)arg2 ;
-(void)getExtensionIcon:(id)arg0 reply:(id)arg1 ;
-(void)getInterAppIcon:(id)arg0 reply:(id)arg1 ;
-(void)setComponentUserTags:(id)arg0 tags:(id)arg1 ;
-(void)setExtensionComponentList:(id)arg0 linkedSDKRequiresEntitlement:(BOOL)arg1 components:(id)arg2 reply:(id)arg3 ;


@end


#endif