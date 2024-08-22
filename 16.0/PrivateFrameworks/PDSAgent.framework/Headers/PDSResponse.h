// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDSRESPONSE_H
#define PDSRESPONSE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PDSResponse : NSObject

@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly, nonatomic) NSDictionary *statusByUser; // ivar: _statusByUser
@property (readonly, nonatomic) NSInteger ttl; // ivar: _ttl


-(id)description;
-(id)initWithStatus:(NSInteger)arg0 statusByUser:(id)arg1 ttl:(NSInteger)arg2 ;


@end


#endif