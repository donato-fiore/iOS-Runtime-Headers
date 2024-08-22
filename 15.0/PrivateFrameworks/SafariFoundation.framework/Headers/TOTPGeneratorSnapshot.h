// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TOTPGENERATORSNAPSHOT_H
#define TOTPGENERATORSNAPSHOT_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "SFAutoFillOneTimeCode.h"

@interface TOTPGeneratorSnapshot : NSObject

@property (retain, nonatomic) SFAutoFillOneTimeCode *oneTimeCode; // ivar: _oneTimeCode
@property (retain, nonatomic) NSDate *startDateOfInterval; // ivar: _startDateOfInterval




@end


#endif