// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSLOCALIZEDSTRINGRECORD_H
#define _LSLOCALIZEDSTRINGRECORD_H

@class NSDictionary, NSArray, NSString;


#import "LSRecord.h"

@interface _LSLocalizedStringRecord : LSRecord

@property (readonly) NSDictionary *_allUnsanitizedStringValues;
@property (readonly) NSArray *_missingBundleLocs;
@property (readonly) NSDictionary *allStringValues;
@property (readonly) NSString *defaultStringValue;
@property (readonly) NSString *stringValue;


+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
+(id)sanitizeString:(id)arg0 ;
-(id)_allUnsanitizedStringValuesWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LocalizedString *)arg3 ;
-(id)_initWithContext:(struct LSContext *)arg0 unitID:(unsigned int)arg1 ;
-(id)_missingBundleLocsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LocalizedString *)arg3 ;
-(id)debugDescription;
-(id)description;
-(id)stringValueWithPreferredLocalizations:(id)arg0 ;
-(void)_detachFromContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;


@end


#endif