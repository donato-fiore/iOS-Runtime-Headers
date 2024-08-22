// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKVIRTUALCONFERENCEJOINMETHOD_H
#define EKVIRTUALCONFERENCEJOINMETHOD_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface EKVirtualConferenceJoinMethod : NSObject

@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) BOOL isBroadcast; // ivar: _isBroadcast
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithTitle:(id)arg0 url:(id)arg1 ;


@end


#endif