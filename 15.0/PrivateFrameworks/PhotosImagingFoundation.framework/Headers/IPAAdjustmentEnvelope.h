// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPAADJUSTMENTENVELOPE_H
#define IPAADJUSTMENTENVELOPE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "IPAAdjustmentStack.h"

@interface IPAAdjustmentEnvelope : NSObject <NSCopying>



@property (retain, nonatomic) IPAAdjustmentStack *adjustmentStack; // ivar: _adjustmentStack
@property (retain, nonatomic) NSString *format; // ivar: _format
@property (retain, nonatomic) NSString *formatVersion; // ivar: _formatVersion
@property (retain, nonatomic) NSString *originator; // ivar: _originator


-(BOOL)containsPhotoAdjustments;
-(BOOL)containsVideoAdjustments;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)photoAdjustmentStack;
-(id)videoAdjustmentStack;


@end


#endif