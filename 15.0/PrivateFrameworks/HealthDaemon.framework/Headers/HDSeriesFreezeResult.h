// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSERIESFREEZERESULT_H
#define HDSERIESFREEZERESULT_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface HDSeriesFreezeResult : NSObject

@property (readonly, copy, nonatomic) NSUUID *frozenIdentifier; // ivar: _frozenIdentifier
@property (readonly, nonatomic) NSInteger status; // ivar: _status


-(id)initWithStatus:(NSInteger)arg0 frozenIdentifier:(id)arg1 ;


@end


#endif