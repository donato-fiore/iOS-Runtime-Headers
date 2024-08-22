// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNABSTRACTACTIVITYALERTDESCRIPTION_H
#define CNABSTRACTACTIVITYALERTDESCRIPTION_H

@class NSString;
@protocol CNAbstractPropertyDescription;


#import "CNPropertyDescription.h"

@interface CNAbstractActivityAlertDescription : CNPropertyDescription <CNAbstractPropertyDescription>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)ABValueFromCNValue:(id)arg0 ;
-(BOOL)canUnifyValue:(id)arg0 withValue:(id)arg1 ;
-(Class)valueClass;
-(id)CNMutableValueForABMultivalue;
-(id)CNValueFromABValue:(*void)arg0 ;


@end


#endif