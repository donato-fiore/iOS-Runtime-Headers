// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCGROUPCANCELHANDLER_H
#define RCGROUPCANCELHANDLER_H

@class NSArray, NSString;
@protocol RCOperationCanceling;

#import <Foundation/Foundation.h>


@interface RCGroupCancelHandler : NSObject <RCOperationCanceling>



@property (copy, nonatomic) NSArray *cancelHandlers; // ivar: _cancelHandlers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)groupCancelHandlerWithCancelHandlers:(id)arg0 ;
-(id)initWithCancelHandlers:(id)arg0 ;
-(void)cancel;


@end


#endif