// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKEDITMODECONFIGURATION_H
#define NTKEDITMODECONFIGURATION_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NTKEditOption.h"

@interface NTKEditModeConfiguration : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_optionsBySlot;
    NTKEditOption *_nilSlotOption;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)JSONObjectRepresentationForFace:(id)arg0 ;
-(id)_alphabeticalSlots;
-(id)dailySnapshotKey;
-(id)description;
-(id)editOptionForSlot:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 device:(id)arg1 editOptionFactory:(id)arg2 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 editOptionClass:(Class)arg1 forDevice:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateSlotsWithBlock:(id)arg0 ;
-(void)setEditOption:(id)arg0 forSlot:(id)arg1 ;


@end


#endif