// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCUIFIELDCOLLECTION_H
#define MCUIFIELDCOLLECTION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "MCUIPayloadUserInputField.h"

@interface MCUIFieldCollection : NSObject {
    NSMutableArray *_payloadFieldArrays;
    NSInteger _currentPayloadIndex;
    NSInteger _currentFieldIndex;
    MCUIPayloadUserInputField *_currentField;
    BOOL _isFinalField;
}




-(BOOL)currentFieldIsFinalField;
-(BOOL)currentFieldIsLastInPayload;
-(BOOL)currentFieldIsSinglePasswordField;
-(NSInteger)currentPayloadIndex;
-(id)currentField;
-(id)initWithUserInput:(id)arg0 ;
-(id)responseDictionariesForCurrentPayload;
-(id)userInputResponses;
-(void)_setCurrentFieldToCurrentIndices;
-(void)_setIsFinalField;
-(void)moveToNextField;
-(void)restartCurrentPayload;


@end


#endif