// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OCPPACKAGE_H
#define OCPPACKAGE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "OCPPackageRelationshipCollection.h"
#import "OCPPackageProperties.h"

@interface OCPPackage : NSObject {
    OCPPackageRelationshipCollection *mRelationships;
    OCPPackageProperties *mProperties;
    NSMutableDictionary *mDefaultContentTypes;
    NSMutableDictionary *mContentTypeOverrides;
}




-(?)initWithRelationshipsXml:(?)arg0 corePropertiesXml:(?)arg1 appPropertiesXmlcontentTypesXml;
-(?)readContentTypeOverrideFromElement;
-(?)readContentTypesXml;
-(?)readDefaultContentTypeFromElement;
-(id)contentTypeForPartLocation:(id)arg0 ;
-(id)init;
-(id)mainDocumentPart;
-(id)partByRelationshipType:(id)arg0 ;
-(id)partForLocation:(id)arg0 ;
-(id)properties;
-(id)relationshipForIdentifier:(id)arg0 ;
-(id)relationshipsByType:(id)arg0 ;
-(void)resetPartForLocation:(id)arg0 ;


@end


#endif