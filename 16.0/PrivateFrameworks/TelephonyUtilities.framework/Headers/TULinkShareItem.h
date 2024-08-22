// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TULINKSHAREITEM_H
#define TULINKSHAREITEM_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>

#import "TUConversationLink.h"

@interface TULinkShareItem : NSObject

@property (copy, nonatomic) NSURL *placeholder; // ivar: _placeholder
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) TUConversationLink *tuConversationLink; // ivar: _tuConversationLink


-(id)initWithTUConversationLink:(id)arg0 ;
-(id)initWithTUConversationLink:(id)arg0 title:(id)arg1 placeholder:(id)arg2 ;


@end


#endif