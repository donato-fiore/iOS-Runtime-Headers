// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLOUDSYNCREPOSITORYDESCRIPTION_H
#define HKCLOUDSYNCREPOSITORYDESCRIPTION_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKCloudSyncContainerDescription.h"

@interface HKCloudSyncRepositoryDescription : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *fullDescription;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) HKCloudSyncContainerDescription *primaryContainerDescription; // ivar: _primaryContainerDescription
@property (readonly, copy, nonatomic) NSArray *secondaryContainerDescriptions; // ivar: _secondaryContainerDescriptions


+(BOOL)supportsSecureCoding;
-(id)_descriptionForContainer:(id)arg0 ;
-(id)_descriptionForDatabase:(id)arg0 indentCount:(NSUInteger)arg1 ;
-(id)_descriptionForRecord:(id)arg0 indentCount:(NSUInteger)arg1 ;
-(id)_descriptionForZone:(id)arg0 indentCount:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 primaryContainerDescription:(id)arg1 secondaryContainerDescriptions:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif