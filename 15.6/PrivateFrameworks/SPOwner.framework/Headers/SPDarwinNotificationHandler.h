// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPDARWINNOTIFICATIONHANDLER_H
#define SPDARWINNOTIFICATIONHANDLER_H


#import <Foundation/Foundation.h>


@interface SPDarwinNotificationHandler : NSObject

@property (nonatomic) int notifyToken; // ivar: _notifyToken


-(id)initWithNotificationName:(id)arg0 changeBlock:(id)arg1 ;
-(void)dealloc;


@end


#endif