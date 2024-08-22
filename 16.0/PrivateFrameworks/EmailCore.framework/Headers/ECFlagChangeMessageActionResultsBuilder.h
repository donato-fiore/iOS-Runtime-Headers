// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECFLAGCHANGEMESSAGEACTIONRESULTSBUILDER_H
#define ECFLAGCHANGEMESSAGEACTIONRESULTSBUILDER_H

@class NSMutableIndexSet, NSString, NSError;
@protocol ECFlagChangeMessageActionResultsBuilder;

#import <Foundation/Foundation.h>


@interface ECFlagChangeMessageActionResultsBuilder : NSObject <ECFlagChangeMessageActionResultsBuilder>



@property (readonly, copy, nonatomic) NSMutableIndexSet *completedUIDs; // ivar: _completedUIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;


@end


#endif