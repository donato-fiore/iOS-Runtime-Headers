// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXCALLDIRECTORYMUTABLEPHONENUMBERENTRYDATA_H
#define CXCALLDIRECTORYMUTABLEPHONENUMBERENTRYDATA_H

@class NSMutableData;
@protocol NSCopying;


#import "CXCallDirectoryPhoneNumberEntryData.h"

@interface CXCallDirectoryMutablePhoneNumberEntryData : CXCallDirectoryPhoneNumberEntryData <NSCopying>



@property (retain, nonatomic) NSMutableData *mutablePhoneNumberData; // ivar: _mutablePhoneNumberData


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)appendPhoneNumber:(NSInteger)arg0 ;


@end


#endif