// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKSTATISTICS_H
#define AKSTATISTICS_H

@class NSCountedSet, NSString;

#import <Foundation/Foundation.h>


@interface AKStatistics : NSObject

@property (retain, nonatomic) NSCountedSet *annotationsCounts; // ivar: _annotationsCounts
@property (retain, nonatomic) NSString *clientPrefix; // ivar: _clientPrefix
@property (retain, nonatomic) NSString *documentType; // ivar: _documentType


+(id)nameForAnnotation:(id)arg0 ;
+(id)nameForClassName:(id)arg0 ;
-(void)_logCoreAnalyticsAction:(id)arg0 ;
-(void)_logCoreAnalyticsAnnotationCreateActionForAnnotationType:(id)arg0 count:(NSUInteger)arg1 ;
-(void)_logCoreAnalyticsHUDPickActionForAnnotationType:(id)arg0 ;
-(void)logAnnotationAdded:(id)arg0 ;
-(void)logDocumentSaved;
-(void)logInkAnnotationStrokeAdded:(id)arg0 ;
-(void)logShapeDetectionHUDPickedShape:(id)arg0 ;
-(void)logShapeDetectionHUDShown;
-(void)resetLogging;


@end


#endif