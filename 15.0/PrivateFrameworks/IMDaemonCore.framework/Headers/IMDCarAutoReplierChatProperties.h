// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDCARAUTOREPLIERCHATPROPERTIES_H
#define IMDCARAUTOREPLIERCHATPROPERTIES_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface IMDCarAutoReplierChatProperties : NSObject {
    NSMutableArray *_suppressedMessageIDs;
}


@property (nonatomic) BOOL autoReplySent; // ivar: _autoReplySent
@property (nonatomic, getter=isUrgent) BOOL urgent; // ivar: _urgent


-(id)init;
-(id)popSuppressedMessages;
-(void)addSuppressedMessage:(id)arg0 ;
-(void)dealloc;


@end


#endif