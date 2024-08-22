// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPPLAYBACKSESSIONCOMMANDINFO_H
#define MPPLAYBACKSESSIONCOMMANDINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPPlaybackSessionCommandInfo : NSObject

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, copy, nonatomic) NSString *revision; // ivar: _revision


+(id)commandInfoWithIdentifier:(id)arg0 revision:(id)arg1 priority:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif