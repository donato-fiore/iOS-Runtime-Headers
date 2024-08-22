// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALVIRTUALCONFERENCEJOINMETHOD_H
#define CALVIRTUALCONFERENCEJOINMETHOD_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface CalVirtualConferenceJoinMethod : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) BOOL isBroadcast; // ivar: _isBroadcast
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithTitle:(id)arg0 URL:(id)arg1 isBroadcast:(BOOL)arg2 ;


@end


#endif