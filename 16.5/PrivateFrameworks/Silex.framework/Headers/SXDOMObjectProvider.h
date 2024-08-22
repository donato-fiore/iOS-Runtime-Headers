// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDOMOBJECTPROVIDER_H
#define SXDOMOBJECTPROVIDER_H

@class NSString;
@protocol SXDOMObjectProviding, SXDocumentControllerProvider, SXAutoPlacement, SXDocumentStyle;

#import <Foundation/Foundation.h>

#import "SXJSONObjectMerger.h"
#import "SXDOM.h"
#import "SXComponents.h"

@interface SXDOMObjectProvider : NSObject <SXDOMObjectProviding>

 {
    id<SXDocumentControllerProvider> *_documentControllerProvider;
    SXJSONObjectMerger *_componentStyleMerger;
    SXJSONObjectMerger *_componentTextStyleMerger;
}


@property (retain, nonatomic) SXDOM *DOM; // ivar: _DOM
@property (readonly, nonatomic) NSObject<SXAutoPlacement> *autoPlacement;
@property (readonly, nonatomic) SXComponents *components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDocumentStyle> *documentStyle;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)componentLayoutForIdentifier:(id)arg0 ;
-(id)componentStyleForComponent:(id)arg0 ;
-(id)componentStyleForIdentifiers:(id)arg0 ;
-(id)componentTextStyleForIdentifier:(id)arg0 classification:(id)arg1 component:(id)arg2 ;
-(id)componentTextStyleForIdentifier:(id)arg0 component:(id)arg1 ;
-(id)componentTextStyleForIdentifier:(id)arg0 inheritingFromComponentTextStyle:(id)arg1 component:(id)arg2 ;
-(id)componentTextStyleForIdentifiers:(id)arg0 component:(id)arg1 ;
-(id)imageResourceForIdentifier:(id)arg0 ;
-(id)initWithDocumentControllerProvider:(id)arg0 componentStyleMerger:(id)arg1 componentTextStyleMerger:(id)arg2 ;
-(id)resourceForIdentifier:(id)arg0 ;
-(id)textStyleForIdentifier:(id)arg0 component:(id)arg1 ;


@end


#endif