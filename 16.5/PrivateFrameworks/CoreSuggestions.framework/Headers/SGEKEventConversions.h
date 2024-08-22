// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGEKEVENTCONVERSIONS_H
#define SGEKEVENTCONVERSIONS_H


#import <Foundation/Foundation.h>


@interface SGEKEventConversions : NSObject



+(id)urlForEKEventFromMailMessageWithId:(id)arg0 sentAt:(id)arg1 opaqueKey:(id)arg2 ;
+(id)urlForEKEventFromTextMessageWithUniqueIdentifier:(id)arg0 ;
+(id)urlForMailMessageWithId:(id)arg0 ;


@end


#endif