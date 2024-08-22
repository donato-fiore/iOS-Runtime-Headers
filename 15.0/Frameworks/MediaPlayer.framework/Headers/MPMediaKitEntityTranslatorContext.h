// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIAKITENTITYTRANSLATORCONTEXT_H
#define MPMEDIAKITENTITYTRANSLATORCONTEXT_H

@class NSString;
@protocol MPMediaKitEntityRelationshipPayloadProvider;

#import <Foundation/Foundation.h>


@interface MPMediaKitEntityTranslatorContext : NSObject

@property (copy, nonatomic) NSString *personID; // ivar: _personID
@property (retain, nonatomic) NSObject<MPMediaKitEntityRelationshipPayloadProvider> *relationshipPayloadProvider; // ivar: _relationshipPayloadProvider




@end


#endif