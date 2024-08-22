// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIJSMODALDOCUMENTCONTROLLER_H
#define SKUIJSMODALDOCUMENTCONTROLLER_H

@class IKJSObject, NSArray;
@protocol SKUIJSModalDocumentController;


#import "SKUIModalDocumentController.h"

@interface SKUIJSModalDocumentController : IKJSObject <SKUIJSModalDocumentController>

 {
    SKUIModalDocumentController *_modalDocumentController;
}


@property (readonly, retain, nonatomic) NSArray *documents;
@property (readonly, weak) SKUIModalDocumentController *modalDocumentController;


-(id)_adjustedOptionsWithOptions:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 modalDocumentController:(id)arg1 ;
-(void)popDocument;
-(void)popToDocument:(id)arg0 ;
-(void)pushDocument:(id)arg0 ;
-(void)replaceDocument:(id)arg0 ;


@end


#endif