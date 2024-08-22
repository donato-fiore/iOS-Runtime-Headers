// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKVERIFIABLEHEALTHRECORDSPARSINGRESULT_H
#define HKVERIFIABLEHEALTHRECORDSPARSINGRESULT_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKVerifiableHealthRecordsParsingResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *localizedTypeDisplayNames; // ivar: _localizedTypeDisplayNames
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 localizedTypeDisplayNames:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif