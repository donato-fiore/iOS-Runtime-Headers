// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHIDEMYEMAILRECORD_H
#define WBSHIDEMYEMAILRECORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSHideMyEmailRecord : NSObject

@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) NSString *privateEmailAddress; // ivar: _privateEmailAddress
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithDomain:(id)arg0 state:(NSUInteger)arg1 privateEmailAddress:(id)arg2 ;


@end


#endif