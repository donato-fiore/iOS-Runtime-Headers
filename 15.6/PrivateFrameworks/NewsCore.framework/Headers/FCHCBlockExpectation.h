// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCHCBLOCKEXPECTATION_H
#define FCHCBLOCKEXPECTATION_H

@class NSString;
@protocol FCHCExpectation;

#import <Foundation/Foundation.h>


@interface FCHCBlockExpectation : NSObject <FCHCExpectation>



@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)validate;


@end


#endif