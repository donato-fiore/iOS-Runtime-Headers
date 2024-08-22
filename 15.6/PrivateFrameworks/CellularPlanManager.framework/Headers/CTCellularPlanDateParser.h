// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTCELLULARPLANDATEPARSER_H
#define CTCELLULARPLANDATEPARSER_H

@class NSString;
@protocol CTCellularPlanValidating;

#import <Foundation/Foundation.h>


@interface CTCellularPlanDateParser : NSObject <CTCellularPlanValidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validate:(id)arg0 ;
+(BOOL)validate:(id)arg0 parseTo:(*CGFloat)arg1 ;


@end


#endif