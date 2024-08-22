// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTENTALERTBUTTON_H
#define WFCONTENTALERTBUTTON_H

@class NSString;
@protocol OS_dispatch_group;


#import "WFSelectableAlertButton.h"
#import "WFContentItem.h"

@interface WFContentAlertButton : WFSelectableAlertButton

@property (readonly, nonatomic) WFContentItem *contentItem; // ivar: _contentItem
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group; // ivar: _group
@property (readonly, nonatomic) BOOL hasContentSubtitle; // ivar: _hasContentSubtitle
@property (nonatomic) BOOL hideSubtitle; // ivar: _hideSubtitle
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle


+(id)buttonWithContentItem:(id)arg0 selected:(BOOL)arg1 stickySelection:(BOOL)arg2 handler:(id)arg3 ;
+(void)processContentAlertButtonSubtitles:(id)arg0 ;
-(BOOL)addSubtitleCompletionHandler:(id)arg0 ;
-(void)getSubtitle:(id)arg0 ;
-(void)start;


@end


#endif