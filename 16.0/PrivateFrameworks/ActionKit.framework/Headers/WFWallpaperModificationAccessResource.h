// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWALLPAPERMODIFICATIONACCESSRESOURCE_H
#define WFWALLPAPERMODIFICATIONACCESSRESOURCE_H

@class WFAccessResource;



@interface WFWallpaperModificationAccessResource : WFAccessResource



+(BOOL)isSystemResource;
-(NSUInteger)status;
-(id)localizedAccessResourceErrorString;
-(id)localizedErrorReasonForStatus:(NSUInteger)arg0 ;
-(id)localizedImportErrorReasonForStatus:(NSUInteger)arg0 ;
-(id)name;
-(id)protectedResourceDescription;


@end


#endif