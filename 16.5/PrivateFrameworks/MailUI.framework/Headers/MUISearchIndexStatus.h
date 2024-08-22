// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUISEARCHINDEXSTATUS_H
#define MUISEARCHINDEXSTATUS_H


#import <Foundation/Foundation.h>


@interface MUISearchIndexStatus : NSObject

@property (nonatomic) BOOL isPaused; // ivar: _isPaused
@property (readonly, nonatomic) BOOL isVisible;
@property (nonatomic) NSUInteger messagesIndexed; // ivar: _messagesIndexed
@property (readonly, nonatomic) float progress;
@property (nonatomic) NSUInteger totalMessages; // ivar: _totalMessages


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithMessagesIndexed:(NSUInteger)arg0 totalMessages:(NSUInteger)arg1 paused:(BOOL)arg2 ;


@end


#endif