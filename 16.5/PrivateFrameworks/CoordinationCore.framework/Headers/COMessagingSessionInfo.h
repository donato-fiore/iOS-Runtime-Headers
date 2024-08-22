// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMESSAGINGSESSIONINFO_H
#define COMESSAGINGSESSIONINFO_H

@class COClusterMember, NSString;

#import <Foundation/Foundation.h>


@interface COMessagingSessionInfo : NSObject

@property (readonly, copy, nonatomic) COClusterMember *member; // ivar: _member
@property (readonly, nonatomic) BOOL producedSession; // ivar: _producedSession
@property (readonly, copy, nonatomic) NSString *subTopic; // ivar: _subTopic


-(id)initWithSubTopic:(id)arg0 member:(id)arg1 produced:(BOOL)arg2 ;


@end


#endif