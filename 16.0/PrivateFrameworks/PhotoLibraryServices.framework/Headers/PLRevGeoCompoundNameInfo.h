// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLREVGEOCOMPOUNDNAMEINFO_H
#define PLREVGEOCOMPOUNDNAMEINFO_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PLRevGeoCompoundNameInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL isContinuation; // ivar: _isContinuation
@property (readonly, copy, nonatomic) NSString *namePrefix; // ivar: _namePrefix
@property (readonly, copy, nonatomic) NSString *nameSuffix; // ivar: _nameSuffix
@property (readonly, copy, nonatomic) NSArray *sortedNames; // ivar: _sortedNames
@property (readonly, nonatomic) BOOL suffixWhenPrefixOnly; // ivar: _suffixWhenPrefixOnly


+(BOOL)supportsSecureCoding;
+(id)_localizedNameForName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNamePrefix:(id)arg0 nameSuffix:(id)arg1 sortedNames:(id)arg2 isContinuation:(BOOL)arg3 suffixWhenPrefixOnly:(BOOL)arg4 ;
-(id)localizedSortedNames;
-(id)localizedTitleForNameInfo;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif