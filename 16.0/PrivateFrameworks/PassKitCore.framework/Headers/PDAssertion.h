// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDASSERTION_H
#define PDASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PDAssertion : NSObject

@property (readonly, nonatomic) CGFloat createdAt; // ivar: _createdAt
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL invalidateWhenBackgrounded; // ivar: _invalidateWhenBackgrounded
@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)description;
-(id)initWithType:(NSUInteger)arg0 identifier:(id)arg1 reason:(id)arg2 ;


@end


#endif