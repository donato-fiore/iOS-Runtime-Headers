// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSALLOWEDLEGACYTLSHOSTMANAGER_H
#define WBSALLOWEDLEGACYTLSHOSTMANAGER_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface WBSAllowedLegacyTLSHostManager : NSObject {
    NSUserDefaults *_browserDefaults;
}




-(BOOL)isLegacyTLSAllowedForHost:(id)arg0 ;
-(id)initWithBrowserDefaults:(id)arg0 ;
-(void)allowLegacyTLSForHost:(id)arg0 ;
-(void)clearAllLegacyTLSHosts;
-(void)clearLegacyTLSForHostIfPresent:(id)arg0 ;
-(void)clearLegacyTLSForHosts:(id)arg0 ;


@end


#endif