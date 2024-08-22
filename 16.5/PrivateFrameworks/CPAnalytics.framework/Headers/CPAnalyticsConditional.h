// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPANALYTICSCONDITIONAL_H
#define CPANALYTICSCONDITIONAL_H

@class NSPredicate, NSString;

#import <Foundation/Foundation.h>


@interface CPAnalyticsConditional : NSObject

@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) NSString *property; // ivar: _property


-(id)_validateAndParseConfig:(id)arg0 forKey:(id)arg1 ;
-(id)initWithConfig:(id)arg0 ;


@end


#endif