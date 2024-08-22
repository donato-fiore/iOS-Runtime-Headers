// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMOBILECOUNTRYCODE_H
#define HKMOBILECOUNTRYCODE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HKMobileCountryCode : NSObject

@property (readonly, copy, nonatomic) NSString *ISOCode; // ivar: _ISOCode
@property (readonly, copy, nonatomic) NSString *code; // ivar: _code
@property (readonly, nonatomic, getter=isOverridden) BOOL overridden; // ivar: _overridden
@property (readonly, nonatomic) NSInteger provenance;


-(id)description;
-(id)initWithMobileCountryCode:(id)arg0 ISOCode:(id)arg1 isOverridden:(BOOL)arg2 ;


@end


#endif