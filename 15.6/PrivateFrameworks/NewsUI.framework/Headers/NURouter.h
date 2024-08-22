// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUROUTER_H
#define NUROUTER_H

@class NSString;
@protocol NURouter, NUURLHandling;

#import <Foundation/Foundation.h>


@interface NURouter : NSObject <NURouter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<NUURLHandling> *urlHandler; // ivar: _urlHandler


-(id)initWithURLHandler:(id)arg0 ;
-(void)routeToNewsAppForYouFeed;


@end


#endif