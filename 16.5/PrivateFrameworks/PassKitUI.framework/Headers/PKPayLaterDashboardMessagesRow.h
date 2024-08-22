// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERDASHBOARDMESSAGESROW_H
#define PKPAYLATERDASHBOARDMESSAGESROW_H

@class NSOrderedSet, NSString;
@protocol PKPayLaterCollectionViewRow, PKDashboardMessagesViewDelegate, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterDashboardMessagesRow : NSObject <PKPayLaterCollectionViewRow>

 {
    NSOrderedSet *_messages;
    NSInteger _currentMessageIndex;
    id<PKDashboardMessagesViewDelegate> *_messagesViewDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(Class)cellClass;
-(id)initWithMessages:(id)arg0 currentMessageIndex:(NSInteger)arg1 messagesViewDelegate:(id)arg2 ;
-(void)configureCell:(id)arg0 ;


@end


#endif