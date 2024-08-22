// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPPASTEBOARDOBJECT_H
#define TSPPASTEBOARDOBJECT_H

@class NSArray;


#import "TSPObject.h"

@interface TSPPasteboardObject : TSPObject

@property (retain, nonatomic) TSPObject *appNativeObject; // ivar: _appNativeObject
@property (copy, nonatomic) NSArray *drawables; // ivar: _drawables
@property (retain, nonatomic) TSPObject *guideStorage; // ivar: _guideStorage
@property (readonly, nonatomic) BOOL isCrossAppPaste; // ivar: _isCrossAppPaste
@property (readonly, nonatomic) BOOL isCrossDocumentPaste; // ivar: _isCrossDocumentPaste
@property (nonatomic) BOOL isSmartCopyPaste; // ivar: _isSmartCopyPaste
@property (nonatomic) BOOL isTextPrimary; // ivar: _isTextPrimary
@property (retain, nonatomic) TSPObject *nativeContentDescription; // ivar: _nativeContentDescription
@property (copy, nonatomic) NSArray *styles; // ivar: _styles
@property (retain, nonatomic) TSPObject *stylesheet; // ivar: _stylesheet
@property (retain, nonatomic) NSArray *topLevelObjects; // ivar: _topLevelObjects
@property (retain, nonatomic) TSPObject *wpStorage; // ivar: _wpStorage


-(NSInteger)tsp_identifier;
-(id)initWithContext:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif