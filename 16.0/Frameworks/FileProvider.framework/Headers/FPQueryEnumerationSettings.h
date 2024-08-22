// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPQUERYENUMERATIONSETTINGS_H
#define FPQUERYENUMERATIONSETTINGS_H

@class NSArray, NSNumber, NSString;


#import "FPEnumerationSettings.h"

@interface FPQueryEnumerationSettings : FPEnumerationSettings

@property (copy) NSArray *allowedFileTypes; // ivar: _allowedFileTypes
@property (copy) NSArray *allowedProviders; // ivar: _allowedProviders
@property (copy) NSNumber *desiredNumberOfItems; // ivar: _desiredNumberOfItems
@property (copy) NSArray *excludedFileTypes; // ivar: _excludedFileTypes
@property (copy) NSString *tagIdentifier; // ivar: _tagIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif