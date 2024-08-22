// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDMOMENTSHAREFETCHCONTEXT_H
#define IMDMOMENTSHAREFETCHCONTEXT_H

@class IMMessageItem, PHMomentShare;

#import <Foundation/Foundation.h>

#import "IMDChat.h"

@interface IMDMomentShareFetchContext : NSObject

@property (retain, nonatomic) IMDChat *chat; // ivar: _chat
@property (retain, nonatomic) IMMessageItem *message; // ivar: _message
@property (retain, nonatomic) PHMomentShare *momentShare; // ivar: _momentShare


+(id)contextWithMomentShare:(id)arg0 forMessage:(id)arg1 inChat:(id)arg2 ;


@end


#endif