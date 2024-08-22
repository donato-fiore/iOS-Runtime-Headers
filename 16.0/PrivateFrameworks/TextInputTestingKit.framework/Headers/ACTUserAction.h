// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACTUSERACTION_H
#define ACTUSERACTION_H

@class NSString;
@protocol ACTUserAction;

#import <Foundation/Foundation.h>


@interface ACTUserAction : NSObject <ACTUserAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger inputSegment; // ivar: _inputSegment
@property (readonly) Class superclass;


-(void)applyWithTyper:(id)arg0 log:(id)arg1 ;


@end


#endif