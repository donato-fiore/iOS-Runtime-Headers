// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDEMPTYUSERACTIVITYRESPONDER_H
#define WDEMPTYUSERACTIVITYRESPONDER_H

@class NSString;
@protocol WDUserActivityResponder;

#import <Foundation/Foundation.h>


@interface WDEmptyUserActivityResponder : NSObject <WDUserActivityResponder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)emptyUserActivityResponder;
-(id)applyTransitionActivity:(id)arg0 ;
-(void)applyChangeActivity:(id)arg0 ;


@end


#endif