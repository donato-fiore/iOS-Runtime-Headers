// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCDEVICEPHYSICALINPUTELEMENT_H
#define _GCDEVICEPHYSICALINPUTELEMENT_H

@class GCDevicePhysicalInputView, NSSet, NSString;
@protocol GCPhysicalInputElement;



@interface _GCDevicePhysicalInputElement : GCDevicePhysicalInputView <GCPhysicalInputElement>



@property (readonly) NSSet *aliases; // ivar: _aliases
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly) NSString *localizedName; // ivar: _localizedName
@property (readonly) NSString *sfSymbolsName; // ivar: _sfSymbolsName
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToElement:(id)arg0 ;
-(NSUInteger)handleGamepadEvent:(id)arg0 withTimestamp:(CGFloat)arg1 ;
-(id)init;
-(id)initWith:(id)arg0 context:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 configuration:(id)arg1 ;
-(void)onCommitInvokeCallbacks:(NSUInteger)arg0 ;


@end


#endif