// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFNAVIGATIONINTENT_H
#define _SFNAVIGATIONINTENT_H

@class NSURL, WebBookmark, WBSCloudTab, UIEventAttribution, NSDictionary, SLHighlight, NSArray, NSString, SFTabStateData, _WKActivatedElementInfo, NSUUID;

#import <Foundation/Foundation.h>


@interface _SFNavigationIntent : NSObject {
    id *_value;
}


@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) BOOL canUseExistingBlankTab;
@property (readonly, nonatomic) WBSCloudTab *cloudTab;
@property (readonly, nonatomic) UIEventAttribution *eventAttribution;
@property (readonly, copy, nonatomic) NSDictionary *externalOptions;
@property (readonly, nonatomic) BOOL externalURLSourceApplicationIsSpotlight;
@property (retain, nonatomic) SLHighlight *highlight; // ivar: _highlight
@property (nonatomic) BOOL isChildIntent; // ivar: _isChildIntent
@property (readonly, copy, nonatomic) NSArray *navigationIntents;
@property (nonatomic) BOOL neverPromptWhenOpeningMultipleIntents; // ivar: _neverPromptWhenOpeningMultipleIntents
@property (readonly, nonatomic) BOOL opensInNewTab;
@property (readonly, nonatomic) BOOL opensInNewWindow;
@property (nonatomic) NSInteger policy; // ivar: _policy
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (nonatomic) NSInteger provenance; // ivar: _provenance
@property (readonly, nonatomic) SFTabStateData *recentlyClosedTabStateData;
@property (nonatomic) BOOL shouldDismissSidebarOnLoad; // ivar: _shouldDismissSidebarOnLoad
@property (readonly, nonatomic) BOOL shouldOrderToForeground;
@property (readonly, nonatomic) BOOL shouldPromptBeforeHandling; // ivar: _shouldPromptBeforeHandling
@property (nonatomic) BOOL shouldRelateToSourceTab; // ivar: _shouldRelateToSourceTab
@property (retain, nonatomic) _WKActivatedElementInfo *sourceElementInfo; // ivar: _sourceElementInfo
@property (retain, nonatomic) NSUUID *sourceTabUUID; // ivar: _sourceTabUUID
@property (retain, nonatomic) NSUUID *sourceWindowUUID; // ivar: _sourceWindowUUID
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(NSInteger)defaultTabOrder;
-(id)_initWithType:(NSUInteger)arg0 value:(id)arg1 policy:(NSInteger)arg2 ;
-(id)description;


@end


#endif