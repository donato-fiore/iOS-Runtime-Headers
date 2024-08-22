// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKSTANDALONEPROVISIONINGNUMERICENTRYCOORDINATOR_H
#define NPKSTANDALONEPROVISIONINGNUMERICENTRYCOORDINATOR_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface NPKStandaloneProvisioningNumericEntryCoordinator : NSObject

@property (retain, nonatomic) NSMutableArray *completedFields; // ivar: _completedFields
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) NSUInteger currentIndex; // ivar: _currentIndex
@property (retain, nonatomic) NSArray *providedFields; // ivar: _providedFields


-(void)_invokeCompletionHandler;
-(void)_showCurrentPasscodePromptOrComplete;
-(void)_showNextPasscodePromptOrComplete;
-(void)invalidate;
-(void)requestNumericInputForFields:(id)arg0 completion:(id)arg1 ;


@end


#endif