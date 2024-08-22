// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSISINLINESTORAGEVARIABLE_H
#define NSISINLINESTORAGEVARIABLE_H

@class NSString;
@protocol NSISVariableDelegate;


#import "NSISVariable.h"

@interface NSISInlineStorageVariable : NSISVariable <NSISVariableDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSString *name; // ivar: _name
@property BOOL shouldBeMinimized; // ivar: _shouldBeMinimized
@property (readonly) Class superclass;
@property BOOL valueIsUserObservable; // ivar: _valueIsUserObservable
@property int valueRestriction; // ivar: _valueRestriction


-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)markedConstraint;
-(id)nsis_descriptionOfVariable:(id)arg0 ;
-(int)nsis_orientationHintForVariable:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)nsis_valueOfVariable:(id)arg0 didChangeInEngine:(id)arg1 ;


@end


#endif