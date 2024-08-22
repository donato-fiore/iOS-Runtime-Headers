// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LSSHAREDWEBCREDENTIALSAPPLINKPLUGIN_H
#define _LSSHAREDWEBCREDENTIALSAPPLINKPLUGIN_H

@class LSAppLinkPlugIn;



@interface _LSSharedWebCredentialsAppLinkPlugIn : LSAppLinkPlugIn



-(id)appLinksWithContext:(struct LSContext *)arg0 error:(*id)arg1 ;
-(id)appLinksWithContext:(struct LSContext *)arg0 forSWCResults:(id)arg1 ;
-(id)callingBundleIdentifier;
-(id)init;
-(struct optional<LSBinding> )bindingWithContext:(struct LSContext *)arg0 forServiceDetails:(id)arg1 callingBundleIdentifier:(id)arg2 ;
-(void)enumerateBindingsWithContext:(struct LSContext *)arg0 forSWCResults:(id)arg1 block:(id)arg2 ;


@end


#endif