// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTABLETEMPLATEPARAMETERSTATE_H
#define WFTABLETEMPLATEPARAMETERSTATE_H

@class NSString, NSArray;
@protocol WFParameterState;

#import <Foundation/Foundation.h>


@interface WFTableTemplateParameterState : NSObject <WFParameterState>

 {
    BOOL _requiresBoundedDate;
}


@property (readonly, nonatomic) NSInteger compoundType; // ivar: _compoundType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *rows; // ivar: _rows
@property (readonly) Class superclass;


+(Class)processingValueClass;
-(BOOL)isEqual:(id)arg0 ;
-(id)actualCopyWithZone:(struct _NSZone *)arg0 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCompoundType:(NSInteger)arg0 rows:(id)arg1 ;
-(id)initWithCompoundType:(NSInteger)arg0 rows:(id)arg1 requiresBoundedDate:(BOOL)arg2 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 contentItemClass:(Class)arg3 ;
-(id)serializedRepresentation;
-(id)stateByAddingRow:(id)arg0 ;
-(id)stateByRemovingRowAtIndex:(NSUInteger)arg0 ;
-(id)stateByReplacingRowAtIndex:(NSUInteger)arg0 withState:(id)arg1 ;
-(id)stateBySettingCompoundType:(NSInteger)arg0 ;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif