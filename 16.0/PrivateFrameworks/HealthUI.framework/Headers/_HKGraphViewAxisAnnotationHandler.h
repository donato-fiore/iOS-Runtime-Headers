// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKGRAPHVIEWAXISANNOTATIONHANDLER_H
#define _HKGRAPHVIEWAXISANNOTATIONHANDLER_H

@class NSString, NSMapTable;
@protocol HKGraphSeriesAxisAnnotation;

#import <Foundation/Foundation.h>


@interface _HKGraphViewAxisAnnotationHandler : NSObject <HKGraphSeriesAxisAnnotation>



@property (nonatomic) BOOL clearedPreviousAnnotations; // ivar: _clearedPreviousAnnotations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *seriesToAnnotations; // ivar: _seriesToAnnotations
@property (readonly) Class superclass;


-(NSInteger)applyAnnotationForSeries:(id)arg0 ;
-(id)init;
-(void)_forceClearAxisAnnotations;
-(void)addAxisAnnotation:(id)arg0 forSeries:(id)arg1 modelCoordinate:(id)arg2 ;
-(void)clearAxisAnnotations;
-(void)startAnnotationSequence;


@end


#endif