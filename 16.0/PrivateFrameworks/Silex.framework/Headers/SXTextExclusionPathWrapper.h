// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXTEXTEXCLUSIONPATHWRAPPER_H
#define SXTEXTEXCLUSIONPATHWRAPPER_H

@class NSString, TSDWrapPolygon;
@protocol TSDWrappable;

#import <Foundation/Foundation.h>

#import "SXTextExclusionPath.h"

@interface SXTextExclusionPathWrapper : NSObject <TSDWrappable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) SXTextExclusionPath *exclusionPath; // ivar: _exclusionPath
@property (readonly, nonatomic) BOOL hasAlpha;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRectangular; // ivar: _isRectangular
@property (readonly, nonatomic) TSDWrapPolygon *myWrapPolygon; // ivar: _myWrapPolygon
@property (readonly) Class superclass;


-(BOOL)isHTMLWrap;
-(id)initWithTextExclusionPath:(id)arg0 ;
-(id)parent;
-(id)wrapPolygon;
-(int)wrapDirection;
-(int)wrapFitType;
-(int)wrapType;
-(struct CGRect )boundsInRoot;
-(struct CGRect )boundsInfluencingExteriorWrap;


@end


#endif