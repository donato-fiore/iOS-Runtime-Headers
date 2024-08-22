// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDCOLORDEFINITION_H
#define TDCOLORDEFINITION_H

@class NSManagedObject, NSDate, NSNumber;
@protocol TDElementAttributes;


#import "TDColorName.h"

@interface TDColorDefinition : NSManagedObject <TDElementAttributes>



@property (retain, nonatomic) NSManagedObject *colorStatus;
@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (retain, nonatomic) TDColorName *name;
@property (retain, nonatomic) NSNumber *physicalColor;


-(id)colorAsString;
-(id)copyDataFromAttributes;
-(id)dataFromAttributes;
-(void)copyAttributesInto:(id)arg0 ;
-(void)setAttributesFromCopyData:(id)arg0 ;
-(void)setAttributesFromData:(id)arg0 ;


@end


#endif