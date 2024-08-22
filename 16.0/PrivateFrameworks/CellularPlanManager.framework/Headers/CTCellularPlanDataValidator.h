// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTCELLULARPLANDATAVALIDATOR_H
#define CTCELLULARPLANDATAVALIDATOR_H

@class NSString;
@protocol CTCellularPlanValidating;

#import <Foundation/Foundation.h>


@interface CTCellularPlanDataValidator : NSObject <CTCellularPlanValidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validate:(id)arg0 ;


@end


#endif