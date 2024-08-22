// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSPREYSERVICE_H
#define OSPREYSERVICE_H

@protocol OspreyRPC;

#import <Foundation/Foundation.h>


@interface OspreyService : NSObject

@property (readonly, nonatomic) NSObject<OspreyRPC> *channel; // ivar: _channel


-(id)initWithConnectionConfiguration:(id)arg0 ;
-(id)initWithConnectionURL:(id)arg0 ;


@end


#endif