// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSSECTIONDETAILDRILLINFIELD_H
#define PKPASSSECTIONDETAILDRILLINFIELD_H

@class NSString, NSArray;


#import "PKPassField.h"

@interface PKPassSectionDetailDrillInField : PKPassField

@property (nonatomic) NSInteger authRequirement; // ivar: _authRequirement
@property (retain, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (retain, nonatomic) NSArray *sectionIdentifiers; // ivar: _sectionIdentifiers


+(BOOL)supportsSecureCoding;
-(BOOL)isDrillInField;
-(id)asDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif