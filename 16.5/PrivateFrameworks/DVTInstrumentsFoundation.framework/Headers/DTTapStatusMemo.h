// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTTAPSTATUSMEMO_H
#define DTTAPSTATUSMEMO_H

@class NSDictionary, NSString;


#import "DTTapMemo.h"

@interface DTTapStatusMemo : DTTapMemo

@property (retain, nonatomic) NSDictionary *info; // ivar: _info
@property (retain, nonatomic) NSString *notice; // ivar: _notice
@property (nonatomic) unsigned int status; // ivar: _status
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(id)initWithStatus:(unsigned int)arg0 notice:(id)arg1 ;
-(id)initWithStatus:(unsigned int)arg0 notice:(id)arg1 info:(id)arg2 ;
-(id)initWithStatus:(unsigned int)arg0 notice:(id)arg1 info:(id)arg2 timestamp:(NSUInteger)arg3 ;


@end


#endif