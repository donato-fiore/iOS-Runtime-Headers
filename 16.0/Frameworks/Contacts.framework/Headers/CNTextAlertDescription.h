// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNTEXTALERTDESCRIPTION_H
#define CNTEXTALERTDESCRIPTION_H

@class NSString;
@protocol CNAbstractPropertyDescription;


#import "CNAbstractActivityAlertDescription.h"

@interface CNTextAlertDescription : CNAbstractActivityAlertDescription <CNAbstractPropertyDescription>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)ABValueForABPerson:(*void)arg0 ;
-(?)setABValue:(?)arg0 onABPersonerror;
-(BOOL)abPropertyID:(*int)arg0 ;
-(BOOL)applyABMultivalueValueBytes:(char *)arg0 length:(NSUInteger)arg1 identifier:(id)arg2 legacyIdentifier:(int)arg3 label:(id)arg4 toCNMultivalueRepresentation:(id)arg5 ;
-(BOOL)isEqualForContact:(id)arg0 other:(id)arg1 ;
-(id)CNValueForContact:(id)arg0 ;
-(id)init;
-(void)decodeUsingCoder:(id)arg0 contact:(id)arg1 ;
-(void)encodeUsingCoder:(id)arg0 contact:(id)arg1 ;
-(void)setCNValue:(id)arg0 onContact:(id)arg1 ;


@end


#endif