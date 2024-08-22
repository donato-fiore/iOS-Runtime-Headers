// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCPLAYERCHANGEREQUEST_H
#define MPCPLAYERCHANGEREQUEST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MPCPlayerChangeRequest : NSObject

@property (retain, nonatomic) NSArray *commands; // ivar: _commands
@property (nonatomic) NSUInteger options; // ivar: _options


+(id)requestWithCommandRequests:(id)arg0 ;
+(void)performRequest:(id)arg0 completion:(id)arg1 ;
+(void)performRequest:(id)arg0 extendedStatusCompletion:(id)arg1 ;
+(void)performRequest:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
+(void)performRequest:(id)arg0 options:(NSUInteger)arg1 extendedStatusCompletion:(id)arg2 ;
-(id)description;
-(id)initWithCommandRequests:(id)arg0 ;
-(void)performWithCompletion:(id)arg0 ;
-(void)performWithExtendedStatusCompletion:(id)arg0 ;


@end


#endif