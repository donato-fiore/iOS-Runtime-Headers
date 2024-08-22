// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SLOTDESCRIPTOR_H
#define _SLOTDESCRIPTOR_H

@class NSArray, NSIndexSet;

#import <Foundation/Foundation.h>


@interface _SlotDescriptor : NSObject

@property (readonly, nonatomic) NSArray *familiesRankedList; // ivar: _familiesRankedList
@property (readonly, nonatomic) NSIndexSet *possibleTypes; // ivar: _possibleTypes
@property (readonly, nonatomic) NSArray *typesRankedList; // ivar: _typesRankedList


+(id)descriptorWithComplicationFamilies:(id)arg0 complicationTypesRankedList:(id)arg1 allowedComplicationTypes:(id)arg2 ;
-(BOOL)allowsFamily:(NSInteger)arg0 inFace:(id)arg1 ;
-(BOOL)allowsType:(NSUInteger)arg0 inFace:(id)arg1 ;
-(BOOL)supportsFamiliesOfComplications:(id)arg0 inFace:(id)arg1 ;
-(BOOL)supportsType:(NSUInteger)arg0 ;
-(void)enumerateAllowedFamiliesForFace:(id)arg0 withBlock:(id)arg1 ;


@end


#endif