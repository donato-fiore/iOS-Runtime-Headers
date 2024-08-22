// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EDWRAPPEDMESSAGE_H
#define _EDWRAPPEDMESSAGE_H

@class EMMessage;

#import <Foundation/Foundation.h>


@interface _EDWrappedMessage : NSObject

@property (readonly, nonatomic) NSInteger databaseID; // ivar: _databaseID
@property (readonly, nonatomic) EMMessage *message; // ivar: _message


-(id)initWithMessage:(id)arg0 databaseID:(NSInteger)arg1 ;


@end


#endif