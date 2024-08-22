// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATMESSAGELINK_H
#define ATMESSAGELINK_H

@class NSString;
@protocol ATMessageLink;

#import <Foundation/Foundation.h>


@interface ATMessageLink : NSObject <ATMessageLink>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int endpointType;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isInitialized) BOOL initialized;
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (readonly) Class superclass;


-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)addRequestHandler:(id)arg0 forDataClass:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeRequestHandlerForDataClass:(id)arg0 ;
-(void)sendRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)sendResponse:(id)arg0 withCompletion:(id)arg1 ;
// -(void)sendResponse:(id)arg0 withProgress:(id)arg1 completion:(unk)arg2  ;


@end


#endif