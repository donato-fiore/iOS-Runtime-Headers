// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCSHAREDLISTENINGQUEUEEVENTCONTENTUPDATEDMESSAGE_H
#define MPCSHAREDLISTENINGQUEUEEVENTCONTENTUPDATEDMESSAGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPCSharedListeningQueueEventContentUpdatedMessage : NSObject

@property (readonly, copy, nonatomic) NSString *localizedMessage; // ivar: _localizedMessage
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


-(id)description;
-(id)initWithLocalizedTitle:(id)arg0 localizedMessage:(id)arg1 ;


@end


#endif