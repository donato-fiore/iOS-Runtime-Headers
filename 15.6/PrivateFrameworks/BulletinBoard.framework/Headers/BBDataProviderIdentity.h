// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBDATAPROVIDERIDENTITY_H
#define BBDATAPROVIDERIDENTITY_H

@class NSArray, NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BBSectionInfo.h"
#import "BBSectionIcon.h"
#import "BBSectionParameters.h"

@interface BBDataProviderIdentity : NSObject <NSSecureCoding>



@property (copy, nonatomic) BBSectionInfo *defaultSectionInfo; // ivar: _defaultSectionInfo
@property (copy, nonatomic) NSArray *defaultSubsectionInfos; // ivar: _defaultSubsectionInfos
@property (copy, nonatomic) NSDictionary *filterDisplayNames; // ivar: _filterDisplayNames
@property (copy, nonatomic) NSString *parentSectionIdentifier; // ivar: _parentSectionIdentifier
@property (copy, nonatomic) NSString *sectionBundlePath; // ivar: _sectionBundlePath
@property (copy, nonatomic) NSString *sectionDisplayName; // ivar: _sectionDisplayName
@property (copy, nonatomic) BBSectionIcon *sectionIcon; // ivar: _sectionIcon
@property (copy, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (retain, nonatomic) BBSectionParameters *sectionParameters; // ivar: _sectionParameters
@property (copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (copy, nonatomic) NSString *sortKey; // ivar: _sortKey
@property (copy, nonatomic) NSDictionary *subsectionDisplayNames; // ivar: _subsectionDisplayNames
@property (readonly, nonatomic) BOOL syncsBulletinDismissal; // ivar: _syncsBulletinDismissal
@property (readonly, nonatomic) ? traits; // ivar: _traits
@property (copy, nonatomic) NSString *universalSectionIdentifier; // ivar: _universalSectionIdentifier


+(BOOL)supportsSecureCoding;
+(id)identityForDataProvider:(id)arg0 ;
+(id)identityForRemoteDataProvider:(id)arg0 ;
-(id)description;
-(id)initForDataProvider:(id)arg0 forRemoteDataProvider:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif