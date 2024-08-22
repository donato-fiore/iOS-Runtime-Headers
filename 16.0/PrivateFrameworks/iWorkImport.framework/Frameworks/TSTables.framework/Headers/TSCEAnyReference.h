// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEANYREFERENCE_H
#define TSCEANYREFERENCE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TSCEWrappedRangeRef.h"

@interface TSCEAnyReference : NSObject {
    TSCEAnyRef _ref;
}


@property (readonly, nonatomic) TSCEAnyRef anyRef;
@property (copy) NSString *overrideText; // ivar: _overrideText
@property (copy) NSString *overrideTextAsTyped; // ivar: _overrideTextAsTyped
@property (nonatomic) TSUPreserveFlags preserveFlags; // ivar: _preserveFlags
@property (readonly, nonatomic) TSCERangeRef rangeRef;
@property (readonly, nonatomic) TSCEWrappedRangeRef *rangeReference;
@property (readonly, nonatomic) TSKUIDStruct tableUID;
@property (nonatomic) BOOL wasConstructedViaNames; // ivar: _wasConstructedViaNames


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCellRef:(struct TSCECellRef *)arg0 ;
-(id)initWithRangeRef:(struct TSCERangeRef *)arg0 ;
-(id)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(id)arg0 partial:(BOOL)arg1 ;
-(id)referenceTextForAutocompleteWithCalculationEngine:(id)arg0 contextSheetName:(id)arg1 preserveFlags:(struct TSUPreserveFlags )arg2 inputString:(id)arg3 inputStringIsComplete:(BOOL)arg4 ;
-(id)referenceTextForAutocompleteWithCalculationEngine:(id)arg0 hostTableUID:(struct TSKUIDStruct *)arg1 preserveFlags:(struct TSUPreserveFlags )arg2 inputString:(id)arg3 inputStringIsComplete:(BOOL)arg4 ;
-(id)referenceTextWithCalculationEngine:(id)arg0 contextSheetName:(id)arg1 ;
-(id)referenceTextWithCalculationEngine:(id)arg0 hostTableUID:(struct TSKUIDStruct *)arg1 ;


@end


#endif