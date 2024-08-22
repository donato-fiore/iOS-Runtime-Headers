// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFWEBVIEWUSAGEMONITOR_H
#define _SFWEBVIEWUSAGEMONITOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _SFWebViewUsageMonitor : NSObject {
    NSString *_hostAppIdentifier;
}


@property (readonly, nonatomic) BOOL shouldAudit;
@property (readonly, nonatomic) NSString *stringAsAuditKey;
@property (nonatomic) BOOL urlHasIDFA; // ivar: _urlHasIDFA
@property (nonatomic) BOOL urlHasQueryString; // ivar: _urlHasQueryString
@property (nonatomic) BOOL userInteracted; // ivar: _userInteracted
@property (nonatomic) BOOL viewControllerViewIsHidden; // ivar: _viewControllerViewIsHidden


-(id)initWithHostAppIdentifier:(id)arg0 ;
-(void)auditUsageIfNeeded;
-(void)checkURL:(id)arg0 ;


@end


#endif