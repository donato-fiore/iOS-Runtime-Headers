// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUIVIRTUALCONFERENCESEARCHRESULTCELL_H
#define EKUIVIRTUALCONFERENCESEARCHRESULTCELL_H

@class EKVirtualConferenceRoomType, EKVirtualConference;


#import "EKUILocationSearchResultCell.h"

@interface EKUIVirtualConferenceSearchResultCell : EKUILocationSearchResultCell {
    EKVirtualConferenceRoomType *_currentRoomType;
    EKVirtualConference *_currentCustomVirtualConference;
}




+(id)_boldTitleFont;
-(void)updateWithCustomVirtualConference:(id)arg0 ;
-(void)updateWithRoomType:(id)arg0 ;


@end


#endif