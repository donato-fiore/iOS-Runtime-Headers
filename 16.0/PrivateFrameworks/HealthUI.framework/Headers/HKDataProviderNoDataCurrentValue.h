// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDATAPROVIDERNODATACURRENTVALUE_H
#define HKDATAPROVIDERNODATACURRENTVALUE_H

@class NSString;
@protocol HKDataProviderValue;

#import <Foundation/Foundation.h>


@interface HKDataProviderNoDataCurrentValue : NSObject <HKDataProviderValue>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)attributedStringWithDisplayType:(id)arg0 unitController:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3 dateCache:(id)arg4 ;
-(id)date;
-(id)lastUpdatedDescriptionWithDateCache:(id)arg0 ;


@end


#endif