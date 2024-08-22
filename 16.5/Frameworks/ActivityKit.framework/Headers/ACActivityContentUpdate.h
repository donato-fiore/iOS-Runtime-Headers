// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACACTIVITYCONTENTUPDATE_H
#define ACACTIVITYCONTENTUPDATE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ACActivityContent.h"
#import "ACActivityDescriptor.h"

@interface ACActivityContentUpdate : NSObject

@property (readonly, copy, nonatomic) ACActivityContent *content; // ivar: _content
@property (readonly, copy, nonatomic) ACActivityDescriptor *descriptor; // ivar: _descriptor
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(id)initWithIdentifier:(id)arg0 descriptor:(id)arg1 state:(NSInteger)arg2 content:(id)arg3 ;


@end


#endif