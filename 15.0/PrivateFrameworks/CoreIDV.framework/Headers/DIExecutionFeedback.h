// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIEXECUTIONFEEDBACK_H
#define DIEXECUTIONFEEDBACK_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DIExecutionFeedback : NSObject <NSSecureCoding>



@property (nonatomic) BOOL consumed; // ivar: _consumed


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif