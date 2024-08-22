// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMESSAGESESSION_H
#define COMESSAGESESSION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "COClusterMember.h"

@interface COMessageSession : NSObject

@property (nonatomic) BOOL didUseNotice; // ivar: _didUseNotice
@property (nonatomic) BOOL didUseRequest; // ivar: _didUseRequest
@property (nonatomic) BOOL didUseResponse; // ivar: _didUseResponse
@property (readonly, retain, nonatomic) COClusterMember *member; // ivar: _member
@property (nonatomic) NSUInteger startTime; // ivar: _startTime
@property (readonly, copy, nonatomic) NSString *subTopic;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithMember:(id)arg0 ;
-(id)messageChannel;
-(void)stopWithNotice:(id)arg0 ;


@end


#endif