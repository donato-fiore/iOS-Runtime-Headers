// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPENUMERATIONSETTINGS_H
#define FPENUMERATIONSETTINGS_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NSFileProviderSearchQuery.h"

@interface FPEnumerationSettings : NSObject <NSSecureCoding, NSCopying>



@property (copy) NSFileProviderSearchQuery *searchQuery; // ivar: _searchQuery
@property (copy) NSArray *sortDescriptors; // ivar: _sortDescriptors


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif