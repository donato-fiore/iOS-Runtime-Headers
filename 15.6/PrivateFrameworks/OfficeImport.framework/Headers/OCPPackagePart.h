// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OCPPACKAGEPART_H
#define OCPPACKAGEPART_H

@class NSURL, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "OCPPackageRelationshipCollection.h"
#import "OCPPackage.h"

@interface OCPPackagePart : NSObject {
    NSURL *mLocation;
    OCPPackageRelationshipCollection *mRelationships;
    ? mDocument;
    NSMutableDictionary *mAlternateContentMap;
}


@property (readonly, weak) OCPPackage *package; // ivar: mPackage


-(?)fallbackNodeForChoiceNode;
-(?)initWithLocation:(?)arg0 relationshipsXmlpackage;
-(?)setFallbackNodeforChoiceNode;
-(id)contentType;
-(id)data;
-(id)firstPartWithRelationshipOfType:(id)arg0 ;
-(id)location;
-(id)relationshipForIdentifier:(id)arg0 ;
-(id)relationshipsByType:(id)arg0 ;
-(struct _xmlDoc *)xmlDocument;
-(struct _xmlTextReader *)xmlReader;
-(void)copyToFile:(id)arg0 ;
-(void)dealloc;


@end


#endif