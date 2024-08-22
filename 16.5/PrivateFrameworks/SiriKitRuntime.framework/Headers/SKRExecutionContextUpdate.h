// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKREXECUTIONCONTEXTUPDATE_H
#define SKREXECUTIONCONTEXTUPDATE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKRExecutionContextUpdate : NSObject <NSSecureCoding>

 {
    ? provideContextCommand;
    ? nativeFlowContextCommand;
    ? nluSystemDialogActs;
    ? nluActiveTasks;
    ? nluCompletedTasks;
    ? undoDirectInvocation;
    ? rrEntities;
    ? pommesContext;
    ? contextUpdateScope;
    ? clearActiveTasks;
    ? clearCompletedTasks;
    ? pegasusConversationContext;
    ? systemDialogActs;
    ? activeTasks;
    ? completedTasks;
}


@property (nonatomic, readonly) NSString *debugDescription;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif