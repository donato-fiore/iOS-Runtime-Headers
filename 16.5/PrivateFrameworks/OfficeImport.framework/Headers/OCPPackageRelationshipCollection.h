// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OCPPACKAGERELATIONSHIPCOLLECTION_H
#define OCPPACKAGERELATIONSHIPCOLLECTION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface OCPPackageRelationshipCollection : NSObject {
    NSMutableDictionary *mIdentifierMap;
    NSMutableDictionary *mTypeMap;
}




-(?)initWithRelationshipsXmlbaseLocation;
-(id)relationshipForIdentifier:(id)arg0 ;
-(id)relationshipsByType:(id)arg0 ;


@end


#endif