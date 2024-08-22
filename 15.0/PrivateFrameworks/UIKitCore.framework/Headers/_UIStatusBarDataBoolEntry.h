// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARDATABOOLENTRY_H
#define _UISTATUSBARDATABOOLENTRY_H

@class UIStatusBarDataEntry;



@interface _UIStatusBarDataBoolEntry : UIStatusBarDataEntry

@property (nonatomic) BOOL boolValue; // ivar: _boolValue


+(BOOL)supportsSecureCoding;
+(id)entryWithBoolValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_ui_descriptionBuilder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromData:(struct ? *)arg0 type:(int)arg1 boolValue:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif