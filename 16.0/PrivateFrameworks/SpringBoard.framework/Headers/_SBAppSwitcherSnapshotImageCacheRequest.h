// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBAPPSWITCHERSNAPSHOTIMAGECACHEREQUEST_H
#define _SBAPPSWITCHERSNAPSHOTIMAGECACHEREQUEST_H

@class NSString, XBApplicationSnapshot;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBAppLayout.h"
#import "SBDisplayItem.h"

@interface _SBAppSwitcherSnapshotImageCacheRequest : NSObject <BSDescriptionProviding>



@property (retain, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBDisplayItem *displayItem; // ivar: _displayItem
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL loadFullSizeSnapshot; // ivar: _loadFullSizeSnapshot
@property (readonly, nonatomic) NSUInteger sequenceID; // ivar: _sequenceID
@property (retain, nonatomic) XBApplicationSnapshot *snapshot; // ivar: _snapshot
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithSequenceID:(NSUInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif