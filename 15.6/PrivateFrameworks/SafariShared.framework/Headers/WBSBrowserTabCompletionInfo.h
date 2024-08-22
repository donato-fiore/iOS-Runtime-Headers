// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSBROWSERTABCOMPLETIONINFO_H
#define WBSBROWSERTABCOMPLETIONINFO_H

@class NSString, NSUUID, NSURL;

#import <Foundation/Foundation.h>


@interface WBSBrowserTabCompletionInfo : NSObject

@property (readonly, copy, nonatomic) NSString *tabGroupTitle; // ivar: _tabGroupTitle
@property (readonly, nonatomic) NSUUID *tabGroupUUID; // ivar: _tabGroupUUID
@property (readonly, nonatomic) NSUInteger tabIndex; // ivar: _tabIndex
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSUUID *windowUUID; // ivar: _windowUUID


-(id)initWithUUID:(id)arg0 windowUUID:(id)arg1 tabGroupUUID:(id)arg2 tabGroupTitle:(id)arg3 tabIndex:(NSUInteger)arg4 url:(id)arg5 title:(id)arg6 ;
-(id)initWithUUID:(id)arg0 windowUUID:(id)arg1 tabIndex:(NSUInteger)arg2 url:(id)arg3 title:(id)arg4 ;


@end


#endif