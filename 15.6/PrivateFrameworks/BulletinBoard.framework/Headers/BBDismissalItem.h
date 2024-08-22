// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBDISMISSALITEM_H
#define BBDISMISSALITEM_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface BBDismissalItem : NSObject

@property (readonly, nonatomic) NSDate *expiration; // ivar: _expiration
@property (readonly, nonatomic) NSUInteger feeds; // ivar: _feeds


-(BOOL)hasExpired;
-(id)description;
-(id)initWithFeeds:(NSUInteger)arg0 ;
-(void)addFeeds:(NSUInteger)arg0 ;


@end


#endif