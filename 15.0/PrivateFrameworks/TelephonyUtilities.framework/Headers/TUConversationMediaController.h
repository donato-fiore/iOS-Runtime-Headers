// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUCONVERSATIONMEDIACONTROLLER_H
#define TUCONVERSATIONMEDIACONTROLLER_H

@class NSString;
@protocol TUConversationMediaControllerDataSourceDelegate, TUConversationManagerDataSource, TUConversationMediaControllerDelegate;

#import <Foundation/Foundation.h>


@interface TUConversationMediaController : NSObject <TUConversationMediaControllerDataSourceDelegate>



@property (readonly, nonatomic) NSObject<TUConversationManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TUConversationMediaControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConversationDataSource:(id)arg0 ;
-(void)mediaPrioritiesChangeForConversation:(id)arg0 ;
-(void)updateConversationWithUUID:(id)arg0 participantPresentationContexts:(id)arg1 ;


@end


#endif