// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWCOLLABORATIONDETAILVIEWMODEL_H
#define SWCOLLABORATIONDETAILVIEWMODEL_H

@class NSArray, NSString, NSItemProvider;
@protocol UICloudSharingControllerDelegate;

#import <Foundation/Foundation.h>

#import "SWHighlight.h"

@interface SWCollaborationDetailViewModel : NSObject {
    ? $__lazy_storage_$_highlightCenter;
    ? _collaborationInfo;
    ? _highlight;
    ? _customContentTitle;
    ? _headerFallback;
    ? _customCollaborators;
    ? _manageButtonTitle;
    ? _showManageButton;
}


@property (nonatomic, weak) NSObject<UICloudSharingControllerDelegate> *cloudSharingControllerDelegate; // ivar: cloudSharingControllerDelegate
@property (nonatomic, copy) NSArray *customCollaborators;
@property (nonatomic, copy) NSString *customContentTitle;
@property (nonatomic, retain) SWHighlight *highlight;
@property (nonatomic, retain) NSItemProvider *itemProvider; // ivar: itemProvider
@property (nonatomic, copy) NSString *manageButtonTitle;
@property (nonatomic) BOOL showManageButton;


-(id)init;
-(id)initWithHighlight:(id)arg0 ;
-(id)initWithItemProvider:(id)arg0 ;


@end


#endif