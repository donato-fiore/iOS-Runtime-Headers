// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSISPLAYBACKOPERATIONVARIABLEDELEGATE_H
#define NSISPLAYBACKOPERATIONVARIABLEDELEGATE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "NSISVariable.h"

@interface NSISPlaybackOperationVariableDelegate : NSObject

@property (copy) NSString *markedConstraintDescription; // ivar: _markedConstraintDescription
@property int orientationHint; // ivar: _orientationHint
@property (retain) NSISVariable *variable; // ivar: _variable
@property (copy) NSString *variableDescription; // ivar: _variableDescription
@property BOOL variableIsUserObservable; // ivar: _variableIsUserObservable


-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg0 ;
-(id)description;
-(id)firstItem;
-(id)nsis_descriptionOfVariable:(id)arg0 ;
-(id)secondItem;
-(int)nsis_orientationHintForVariable:(id)arg0 ;
-(void)_addToEngine:(id)arg0 ;
-(void)dealloc;
-(void)nsis_valueOfVariable:(id)arg0 didChangeInEngine:(id)arg1 ;


@end


#endif