// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHEURISTICACTIONMAKERSANDEXPIRERS_H
#define ATXHEURISTICACTIONMAKERSANDEXPIRERS_H

@class NSArray, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXHeuristicActionMakersAndExpirers : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *actionMakers; // ivar: _actionMakers
@property (readonly, nonatomic) NSSet *expirers; // ivar: _expirers


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithActionMakers:(id)arg0 expirers:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif