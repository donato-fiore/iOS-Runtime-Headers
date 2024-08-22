// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSTABDIALOGCANCELLATIONCONTEXT_H
#define WBSTABDIALOGCANCELLATIONCONTEXT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface WBSTabDialogCancellationContext : NSObject

@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)cancellationContextWithReason:(id)arg0 userInfo:(id)arg1 ;
+(id)committedNavigationContextWithURL:(id)arg0 ;
+(id)provisionalNavigationContext;
+(id)tabClosedContext;
-(id)init;
-(id)initWithReason:(id)arg0 userInfo:(id)arg1 ;


@end


#endif