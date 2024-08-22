// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTSECTIONINFOLISTITEM_H
#define BLTSECTIONINFOLISTITEM_H

@class NSString, BBSectionIcon, NSDictionary;

#import <Foundation/Foundation.h>


@interface BLTSectionInfoListItem : NSObject

@property (copy) NSString *overriddenDisplayName; // ivar: _overriddenDisplayName
@property (copy) NSString *overriddenFactorySectionID; // ivar: _overriddenFactorySectionID
@property (copy) BBSectionIcon *overriddenIcon; // ivar: _overriddenIcon
@property (retain) NSDictionary *overrides; // ivar: _overrides
@property (copy) NSString *phoneSectionID; // ivar: _phoneSectionID
@property (copy) NSString *universalSectionID; // ivar: _universalSectionID




@end


#endif