// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDSVGTOBEZIERPATHCONVERTER_H
#define TSDSVGTOBEZIERPATHCONVERTER_H

@class TSUBezierPath, NSString;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface TSDSVGToBezierPathConverter : NSObject <NSXMLParserDelegate>

 {
    TSUBezierPath *mFileBezierPath;
    NSString *mHiddenOnTag;
    NSUInteger mHiddenOnTagNestedCount;
    CGAffineTransform mGroupedAffineTransform;
    NSUInteger mGroupedAffineTransformNestedCount;
    BOOL mViewBoxFound;
    CGRect mViewBox;
    BOOL mUsesEvenOdd;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(struct CGAffineTransform )transformFromSVGTransformAttributeString:(id)arg0 ;
+(struct CGPath *)newPathFromSVGPathString:(id)arg0 ;
+(struct CGPath *)newPathFromSVGPathString:(id)arg0 shouldClosePathAtEnd:(BOOL)arg1 ;
+(struct CGPath *)newPathFromSVGPolygonString:(id)arg0 ;
+(struct CGPath *)newPathFromSVGPolylineString:(id)arg0 ;
-(id)bezierPathFromSVGData:(id)arg0 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;


@end


#endif