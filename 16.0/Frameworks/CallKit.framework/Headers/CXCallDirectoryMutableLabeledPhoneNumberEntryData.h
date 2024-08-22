// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCALLDIRECTORYMUTABLELABELEDPHONENUMBERENTRYDATA_H
#define CXCALLDIRECTORYMUTABLELABELEDPHONENUMBERENTRYDATA_H

@class NSMutableDictionary, NSMutableData;
@protocol NSCopying;


#import "CXCallDirectoryLabeledPhoneNumberEntryData.h"

@interface CXCallDirectoryMutableLabeledPhoneNumberEntryData : CXCallDirectoryLabeledPhoneNumberEntryData <NSCopying>



@property (retain, nonatomic) NSMutableDictionary *labelToLabelDataOffset; // ivar: _labelToLabelDataOffset
@property (retain, nonatomic) NSMutableData *mutableLabelData; // ivar: _mutableLabelData
@property (retain, nonatomic) NSMutableData *mutablePhoneNumberData; // ivar: _mutablePhoneNumberData


-(BOOL)appendPhoneNumber:(NSInteger)arg0 label:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;


@end


#endif