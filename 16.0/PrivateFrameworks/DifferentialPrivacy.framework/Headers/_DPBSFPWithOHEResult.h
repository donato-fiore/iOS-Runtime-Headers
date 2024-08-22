// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPBSFPWITHOHERESULT_H
#define _DPBSFPWITHOHERESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _DPBSFPWithOHEResult : NSObject

@property (readonly, copy, nonatomic) NSString *privatizedString; // ivar: _privatizedString
@property (readonly, nonatomic) NSUInteger segmentIndex; // ivar: _segmentIndex
@property (readonly, nonatomic) BOOL verificationMode; // ivar: _verificationMode


-(id)init;
-(id)initWithBitString:(id)arg0 segmentIndex:(NSUInteger)arg1 verificationMode:(BOOL)arg2 ;


@end


#endif