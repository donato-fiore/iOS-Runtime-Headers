// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDETECTIONITEM_H
#define PKDETECTIONITEM_H

@class UIBezierPath, NSUUID, UIColor;

#import <Foundation/Foundation.h>

#import "PKDrawing.h"
#import "PKDetectionQueryItem.h"
#import "PKRecognitionSessionManager.h"

@interface PKDetectionItem : NSObject

@property (retain, nonatomic) UIBezierPath *baselinePath; // ivar: _baselinePath
@property (retain, nonatomic) UIBezierPath *boundsPath; // ivar: _boundsPath
@property (retain, nonatomic) NSUUID *cachedUUID; // ivar: _cachedUUID
@property (weak, nonatomic) PKDrawing *drawing; // ivar: _drawing
@property (nonatomic) CGRect frame; // ivar: _frame
@property (retain, nonatomic) UIColor *inkColor; // ivar: _inkColor
@property (retain, nonatomic) PKDetectionQueryItem *queryItem; // ivar: _queryItem
@property (weak, nonatomic) PKRecognitionSessionManager *sessionManager; // ivar: _sessionManager
@property (nonatomic) CGRect strokeBounds; // ivar: _strokeBounds
@property (readonly, nonatomic) UIColor *strokeColor;
@property (nonatomic) CGFloat strokeWidth; // ivar: _strokeWidth
@property (nonatomic) BOOL validCachedUUID; // ivar: _validCachedUUID


-(id)UUID;
-(id)_actionNameForActivation:(BOOL)arg0 ;
-(id)_strokes;
-(id)image;
-(id)initWithSessionManager:(id)arg0 ;
-(id)setUUID:(id)arg0 ;
-(void)_generatePaths;


@end


#endif