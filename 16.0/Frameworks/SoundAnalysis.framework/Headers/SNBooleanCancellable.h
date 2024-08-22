// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNBOOLEANCANCELLABLE_H
#define SNBOOLEANCANCELLABLE_H

@class NSString;
@protocol SNCancellable;

#import <Foundation/Foundation.h>


@interface SNBooleanCancellable : NSObject <SNCancellable>

 {
    BOOL _isCancelled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)cancel;


@end


#endif