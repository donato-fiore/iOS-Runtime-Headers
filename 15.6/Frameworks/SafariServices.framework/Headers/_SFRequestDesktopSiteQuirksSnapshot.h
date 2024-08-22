// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFREQUESTDESKTOPSITEQUIRKSSNAPSHOT_H
#define _SFREQUESTDESKTOPSITEQUIRKSSNAPSHOT_H

@class NSDictionary, NSString;
@protocol WBSRemotePlistSnapshot;

#import <Foundation/Foundation.h>


@interface _SFRequestDesktopSiteQuirksSnapshot : NSObject <WBSRemotePlistSnapshot>

 {
    NSDictionary *_requestDesktopSiteQuirks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)allRequestDesktopSiteQuirks;
-(id)initWithPlistData:(id)arg0 error:(*id)arg1 ;
-(id)plistDataWithFormat:(NSUInteger)arg0 ;
-(id)requestDesktopSiteSettingForDomain:(id)arg0 ;


@end


#endif