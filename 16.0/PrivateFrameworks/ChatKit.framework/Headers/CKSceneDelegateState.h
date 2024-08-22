// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSCENEDELEGATESTATE_H
#define CKSCENEDELEGATESTATE_H

@class NSDate, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKSceneDelegateState : NSObject <NSSecureCoding>



@property (nonatomic) BOOL composingNewMessage; // ivar: _composingNewMessage
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) NSUInteger filterMode; // ivar: _filterMode
@property (retain, nonatomic) NSString *groupID; // ivar: _groupID
@property (nonatomic) BOOL showingInbox; // ivar: _showingInbox
@property (retain, nonatomic) NSArray *unreadLastMessages; // ivar: _unreadLastMessages


+(BOOL)supportsSecureCoding;
+(id)stateFromIsComposingNewMessage:(BOOL)arg0 messageHasContent:(BOOL)arg1 isShowingBlankTranscript:(BOOL)arg2 isControllerCollapsed:(BOOL)arg3 isTopVCChatNavigationController:(BOOL)arg4 conversation:(id)arg5 filterMode:(NSUInteger)arg6 isShowingInbox:(BOOL)arg7 unreadMessages:(id)arg8 ;
+(id)unarchivingClasses;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUnreadMessages:(id)arg0 groupID:(id)arg1 composingNewMessage:(BOOL)arg2 filterMode:(NSUInteger)arg3 showingInbox:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif