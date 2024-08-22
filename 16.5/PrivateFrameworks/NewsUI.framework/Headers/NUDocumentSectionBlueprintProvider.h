// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUDOCUMENTSECTIONBLUEPRINTPROVIDER_H
#define NUDOCUMENTSECTIONBLUEPRINTPROVIDER_H

@class NSString, FCObservable;
@protocol NUDocumentSectionBlueprintProvider;

#import <Foundation/Foundation.h>


@interface NUDocumentSectionBlueprintProvider : NSObject <NUDocumentSectionBlueprintProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) FCObservable *tempObservableContentOverlayBlueprintData; // ivar: _tempObservableContentOverlayBlueprintData
@property (readonly, nonatomic) FCObservable *tempObservableFooterBlueprint; // ivar: _tempObservableFooterBlueprint
@property (readonly, nonatomic) FCObservable *tempObservableHeaderBlueprint; // ivar: _tempObservableHeaderBlueprint


-(id)init;
-(id)observableContentOverlayBlueprintData;
-(id)observableFooterBlueprint;
-(id)observableHeaderBlueprint;


@end


#endif