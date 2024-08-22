// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDPASSMESSAGES_H
#define PKDASHBOARDPASSMESSAGES_H

@class NSString, NSOrderedSet;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardPassMessages : NSObject <PKDashboardItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOrderedSet *messages; // ivar: _messages
@property (readonly) Class superclass;


+(id)identifier;


@end


#endif