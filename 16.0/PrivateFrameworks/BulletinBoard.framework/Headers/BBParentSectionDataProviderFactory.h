// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BBPARENTSECTIONDATAPROVIDERFACTORY_H
#define BBPARENTSECTIONDATAPROVIDERFACTORY_H

@class NSString;
@protocol BBSectionIdentity, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BBSectionInfo.h"

@interface BBParentSectionDataProviderFactory : NSObject <BBSectionIdentity, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) BBSectionInfo *sectionInfo; // ivar: _sectionInfo
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *universalSectionIdentifier; // ivar: _universalSectionIdentifier


+(BOOL)supportsSecureCoding;
+(id)factoryFromSectionInfo:(id)arg0 ;
-(id)dataProviders;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSectionInfo:(id)arg0 ;
-(id)sectionDisplayName;
-(id)sectionIcon;
-(id)sectionIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif