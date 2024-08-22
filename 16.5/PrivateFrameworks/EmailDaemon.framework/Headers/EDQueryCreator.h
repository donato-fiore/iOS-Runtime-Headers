// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDQUERYCREATOR_H
#define EDQUERYCREATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EDQueryCreator : NSObject

@property (readonly, nonatomic) NSString *queryType; // ivar: _queryType


-(id)initWithQueryType:(id)arg0 ;
-(id)queryWithStartDate:(id)arg0 endDate:(id)arg1 ;


@end


#endif