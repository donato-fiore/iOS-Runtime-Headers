// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCGROUPCANCELHANDLER_H
#define FCGROUPCANCELHANDLER_H

@class NSArray, NSString;
@protocol FCOperationCanceling;

#import <Foundation/Foundation.h>


@interface FCGroupCancelHandler : NSObject <FCOperationCanceling>



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