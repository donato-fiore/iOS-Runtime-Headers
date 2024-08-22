// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSBROWSERTABCOMPLETIONMATCH_H
#define WBSBROWSERTABCOMPLETIONMATCH_H

@class NSString, NSUUID;


#import "WBSTabCompletionMatch.h"

@interface WBSBrowserTabCompletionMatch : WBSTabCompletionMatch

@property (readonly, copy, nonatomic) NSString *tabGroupTitle; // ivar: _tabGroupTitle
@property (readonly, nonatomic) NSUUID *tabGroupUUID; // ivar: _tabGroupUUID
@property (readonly, nonatomic) NSUInteger tabIndex; // ivar: _tabIndex
@property (readonly, nonatomic) NSUUID *tabUUID; // ivar: _tabUUID
@property (readonly, nonatomic) NSUUID *windowUUID; // ivar: _windowUUID


-(id)initWithTabInfo:(id)arg0 userTypedString:(id)arg1 forQueryID:(NSInteger)arg2 ;
-(id)initWithTabUUID:(id)arg0 windowUUID:(id)arg1 tabIndex:(NSUInteger)arg2 userTypedString:(id)arg3 tabURL:(id)arg4 tabTitle:(id)arg5 forQueryID:(NSInteger)arg6 ;
-(id)parsecDomainIdentifier;


@end


#endif