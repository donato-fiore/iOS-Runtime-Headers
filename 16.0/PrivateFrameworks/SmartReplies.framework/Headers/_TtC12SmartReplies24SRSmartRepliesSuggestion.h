// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12SMARTREPLIES24SRSMARTREPLIESSUGGESTION_H
#define _TTC12SMARTREPLIES24SRSMARTREPLIESSUGGESTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC12SmartReplies24SRSmartRepliesSuggestion : NSObject {
    ? title;
}


@property (nonatomic, readonly) BOOL isDynamicReply; // ivar: isDynamicReply
@property (nonatomic, readonly) NSString *title;


-(id)init;
-(id)initWithTitle:(id)arg0 isDynamicReply:(BOOL)arg1 ;


@end


#endif