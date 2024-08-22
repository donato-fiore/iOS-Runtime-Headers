// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTCELLULARPLANSUBSCRIPTIONTYPEPARSER_H
#define CTCELLULARPLANSUBSCRIPTIONTYPEPARSER_H

@class NSString;
@protocol CTCellularPlanValidating;

#import <Foundation/Foundation.h>


@interface CTCellularPlanSubscriptionTypeParser : NSObject <CTCellularPlanValidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validate:(id)arg0 ;
+(BOOL)validate:(id)arg0 parseTo:(*int)arg1 ;


@end


#endif