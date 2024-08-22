// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTDEBUGLOGCONTROLLER_H
#define PKTEXTINPUTDEBUGLOGCONTROLLER_H

@class NSMutableArray, NSString;
@protocol PKTextInputDebugStateReporting;

#import <Foundation/Foundation.h>


@interface PKTextInputDebugLogController : NSObject <PKTextInputDebugStateReporting>

 {
    NSMutableArray *__logEntries;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)debugStateCanDisplayDetails;
-(id)debugStateDetailViewController;
-(id)init;
-(void)reportDebugStateDescription:(id)arg0 ;


@end


#endif