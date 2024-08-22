// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTENTITEMCHANGETRANSACTION_H
#define WFCONTENTITEMCHANGETRANSACTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WFContentItem.h"

@interface WFContentItemChangeTransaction : NSObject

@property (readonly, nonatomic) WFContentItem *contentItem; // ivar: _contentItem
@property (copy, nonatomic) NSString *mode; // ivar: _mode


-(id)initWithContentItem:(id)arg0 ;
// -(void)saveWithCompletionHandler:(id)arg0 isNew:(unk)arg1  ;


@end


#endif