// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKNETWORK_H
#define TKNETWORK_H


#import <Foundation/Foundation.h>


@interface TKNetwork : NSObject

@property (readonly, nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval


+(id)shared;
+(void)setShared:(id)arg0 ;
-(id)downloadImage:(id)arg0 priority:(NSInteger)arg1 completion:(id)arg2 ;
-(id)downloadRequest:(id)arg0 priority:(NSInteger)arg1 completion:(id)arg2 ;
-(id)loadRequest:(id)arg0 priority:(NSInteger)arg1 completion:(id)arg2 ;
-(void)updateNetworkActivity:(NSInteger)arg0 ;


@end


#endif