// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DUMMYHANDLERPROVIDER_H
#define DUMMYHANDLERPROVIDER_H

@class NSString;
@protocol INIntentHandlerProvidingPrivate;

#import <Foundation/Foundation.h>


@interface DummyHandlerProvider : NSObject <INIntentHandlerProvidingPrivate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)handlerForIntent:(id)arg0 ;
-(id)initWithHandler:(id)arg0 ;


@end


#endif