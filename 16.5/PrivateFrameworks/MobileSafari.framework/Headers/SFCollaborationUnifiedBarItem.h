// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCOLLABORATIONUNIFIEDBARITEM_H
#define SFCOLLABORATIONUNIFIEDBARITEM_H

@class _SWCollaborationButtonView;


#import "SFUnifiedBarItem.h"
#import "SFCollaborationUnifiedBarItemView.h"

@interface SFCollaborationUnifiedBarItem : SFUnifiedBarItem {
    SFCollaborationUnifiedBarItemView *_view;
}


@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButton;


-(id)init;
-(id)view;


@end


#endif