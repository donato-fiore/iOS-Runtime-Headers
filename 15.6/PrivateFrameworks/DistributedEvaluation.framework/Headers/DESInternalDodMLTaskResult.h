// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DESINTERNALDODMLTASKRESULT_H
#define DESINTERNALDODMLTASKRESULT_H

@class NSDictionary, NSData, NSURL;

#import <Foundation/Foundation.h>


@interface DESInternalDodMLTaskResult : NSObject

@property (readonly, nonatomic) NSDictionary *JSONResult; // ivar: _JSONResult
@property (readonly, nonatomic) NSData *binaryResult; // ivar: _binaryResult
@property (readonly, nonatomic) NSURL *deferralURL; // ivar: _deferralURL
@property (readonly, nonatomic) BOOL deferred; // ivar: _deferred
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration


-(id)description;
-(id)initWithJSONResult:(id)arg0 binaryResult:(id)arg1 deferred:(BOOL)arg2 deferralURL:(id)arg3 duration:(CGFloat)arg4 ;


@end


#endif