// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSOVERRIDENOTIFICATIONLISTDISPLAYSTYLEASSERTION_H
#define CSOVERRIDENOTIFICATIONLISTDISPLAYSTYLEASSERTION_H

@class NSString;
@protocol BSInvalidatable, BSCancellable;

#import <Foundation/Foundation.h>


@interface CSOverrideNotificationListDisplayStyleAssertion : NSObject <BSInvalidatable, BSCancellable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger displayStyle; // ivar: _displayStyle
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideNotificationCount; // ivar: _hideNotificationCount
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)initWithNotificationListDisplayStyle:(NSUInteger)arg0 hideNotificationCount:(BOOL)arg1 reason:(id)arg2 invalidationHandler:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)invalidate;


@end


#endif