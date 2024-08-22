// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSCRIPTINGACTIONRESOURCE_H
#define WFSCRIPTINGACTIONRESOURCE_H



#import "WFResource.h"
#import "WFSecuredPreferences.h"

@interface WFScriptingActionResource : WFResource

@property (readonly, nonatomic) WFSecuredPreferences *securedPreferences; // ivar: _securedPreferences


+(BOOL)mustBeAvailableForDisplay;
-(id)initWithDefinition:(id)arg0 ;
-(void)preferencesUpdated:(id)arg0 ;
-(void)refreshAvailability;


@end


#endif