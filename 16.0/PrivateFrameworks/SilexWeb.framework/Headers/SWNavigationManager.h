// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWNAVIGATIONMANAGER_H
#define SWNAVIGATIONMANAGER_H

@class NSString, NSMutableDictionary, NSMutableArray, NSMutableSet;
@protocol SWNavigationManager;

#import <Foundation/Foundation.h>

#import "SWNavigationPreview.h"

@interface SWNavigationManager : NSObject <SWNavigationManager>



@property (retain, nonatomic) SWNavigationPreview *currentPreview; // ivar: _currentPreview
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *extensionHandlers; // ivar: _extensionHandlers
@property (readonly, nonatomic) NSMutableArray *handlers; // ivar: _handlers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *observers; // ivar: _observers
@property (readonly, nonatomic) NSMutableDictionary *schemeHandlers; // ivar: _schemeHandlers
@property (readonly) Class superclass;


-(BOOL)shouldPreviewRequest:(id)arg0 ;
-(NSUInteger)actionForRequest:(id)arg0 ;
-(id)init;
-(id)previewViewControllerForRequest:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)commitViewController:(id)arg0 ;
-(void)registerHandler:(id)arg0 ;
-(void)registerHandler:(id)arg0 extension:(id)arg1 ;
-(void)registerHandler:(id)arg0 scheme:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif