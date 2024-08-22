// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONSCONTENT_H
#define ATXNOTIFICATIONSCONTENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXNotificationsContent : NSObject

@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithContent:(id)arg0 title:(id)arg1 ;


@end


#endif