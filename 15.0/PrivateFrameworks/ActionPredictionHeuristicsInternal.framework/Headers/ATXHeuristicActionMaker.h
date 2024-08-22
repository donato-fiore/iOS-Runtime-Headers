// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXHEURISTICACTIONMAKER_H
#define ATXHEURISTICACTIONMAKER_H

@class NSString, ATXActionCriteria;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXHeuristicActionMaker : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *actionTypeName;
@property (retain, nonatomic) ATXActionCriteria *criteria; // ivar: _criteria
@property (retain, nonatomic) NSString *heuristic; // ivar: _heuristic
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)_makeAction;
-(id)action;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif