// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDLAYOUTCHANGEOBSERVER_H
#define TSDLAYOUTCHANGEOBSERVER_H

@class TSKDocumentRoot, NSString;
@protocol TSKChangeSourceObserver;

#import <Foundation/Foundation.h>

#import "TSDLayoutController.h"

@interface TSDLayoutChangeObserver : NSObject <TSKChangeSourceObserver>

 {
    TSKDocumentRoot *_documentRoot;
    TSDLayoutController *_layoutController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDocumentRoot:(id)arg0 layoutController:(id)arg1 ;
-(void)didProcessAllChanges;
-(void)i_layoutRegistered:(id)arg0 ;
-(void)i_layoutUnregistered:(id)arg0 ;
-(void)preprocessChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)processChanges:(id)arg0 forChangeSource:(id)arg1 ;


@end


#endif