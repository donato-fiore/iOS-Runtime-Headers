// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMEDIASESSIONMANAGER_H
#define WFMEDIASESSIONMANAGER_H

@class AMSBag, NSString, AMSMediaTask;

#import <Foundation/Foundation.h>


@interface WFMediaSessionManager : NSObject

@property (readonly, nonatomic) AMSBag *bag; // ivar: _bag
@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (readonly, nonatomic) AMSMediaTask *task; // ivar: _task


-(id)init;
-(id)initWithClientIdentifier:(id)arg0 clientVersion:(id)arg1 ;
-(void)lookupMediaType:(NSInteger)arg0 withIdentifiers:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif