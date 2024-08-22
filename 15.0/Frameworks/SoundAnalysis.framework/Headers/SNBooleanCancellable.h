// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNBOOLEANCANCELLABLE_H
#define SNBOOLEANCANCELLABLE_H

@class NSString;
@protocol SNCancellable;

#import <Foundation/Foundation.h>


@interface SNBooleanCancellable : NSObject <SNCancellable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isCancelled; // ivar: _isCancelled
@property (readonly) Class superclass;


-(id)init;
-(void)cancel;


@end


#endif