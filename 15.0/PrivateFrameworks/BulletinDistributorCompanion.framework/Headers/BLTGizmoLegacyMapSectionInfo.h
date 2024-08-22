// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTGIZMOLEGACYMAPSECTIONINFO_H
#define BLTGIZMOLEGACYMAPSECTIONINFO_H

@class NSDictionary, NSString, BBSectionIcon;

#import <Foundation/Foundation.h>


@interface BLTGizmoLegacyMapSectionInfo : NSObject {
    NSDictionary *_notificationMap;
}


@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) BBSectionIcon *icon; // ivar: _icon
@property (readonly, copy, nonatomic) NSString *mappedParentSectionID;
@property (readonly, copy, nonatomic) NSString *mappedSectionID;


-(id)initWithNotificationMap:(id)arg0 ;


@end


#endif