// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSTASKINGEVENTSUBSCRIBER_H
#define DRSTASKINGEVENTSUBSCRIBER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DRSTaskingEventSubscriber : NSObject

@property (readonly, nonatomic) NSString *teamID; // ivar: _teamID
@property (readonly, nonatomic) NSUInteger token; // ivar: _token


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithTeamID:(id)arg0 token:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif