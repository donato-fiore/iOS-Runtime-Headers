// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASPASSWORDDATA_H
#define ICASPASSWORDDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASPasswordType.h"

@interface ICASPasswordData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *hasHint; // ivar: _hasHint
@property (readonly, nonatomic) ICASPasswordType *passwordType; // ivar: _passwordType


+(id)dataName;
-(id)initWithPasswordType:(id)arg0 hasHint:(id)arg1 ;
-(id)toDict;


@end


#endif