// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKVALIDATIONERRORTRACKER_H
#define _HKVALIDATIONERRORTRACKER_H

@class NSMutableString;

#import <Foundation/Foundation.h>


@interface _HKValidationErrorTracker : NSObject

@property (nonatomic) NSInteger errorCount; // ivar: _errorCount
@property (retain, nonatomic) NSMutableString *errorMessage; // ivar: _errorMessage


-(id)init;


@end


#endif