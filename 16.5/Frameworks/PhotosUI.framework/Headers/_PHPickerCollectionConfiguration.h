// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PHPICKERCOLLECTIONCONFIGURATION_H
#define _PHPICKERCOLLECTIONCONFIGURATION_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _PHPickerCollectionConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *_identifiers; // ivar: __identifiers
@property (nonatomic) BOOL allowsEditingCollection; // ivar: _allowsEditingCollection
@property (copy, nonatomic) NSArray *disabledIdentifiers; // ivar: _disabledIdentifiers
@property (copy, nonatomic) NSArray *preselectedIdentifiers; // ivar: _preselectedIdentifiers
@property (copy, nonatomic) NSString *purpose; // ivar: _purpose
@property (copy, nonatomic) NSArray *suggestedIdentifiers; // ivar: _suggestedIdentifiers


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifiers:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif