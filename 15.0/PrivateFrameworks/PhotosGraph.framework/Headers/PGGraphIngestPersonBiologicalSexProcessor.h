// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHINGESTPERSONBIOLOGICALSEXPROCESSOR_H
#define PGGRAPHINGESTPERSONBIOLOGICALSEXPROCESSOR_H

@class NSString;
@protocol PGGraphIngestProcessor;

#import <Foundation/Foundation.h>

#import "PGGraphBuilder.h"

@interface PGGraphIngestPersonBiologicalSexProcessor : NSObject <PGGraphIngestProcessor>

 {
    PGGraphBuilder *_graphBuilder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(NSUInteger)_sexForPersonNode:(id)arg0 photoLibrary:(id)arg1 ;
-(NSUInteger)sexForFaces:(id)arg0 personDescription:(id)arg1 ;
-(id)_sexDescriptionForBiologicalSex:(NSUInteger)arg0 ;
-(unsigned short)_phBiologicalSexFromIngestBiologicalSex:(NSUInteger)arg0 ;
-(void)_writeBiologicalSexByPerson:(id)arg0 toPhotoLibrary:(id)arg1 ;
-(void)processPersonBiologicalSexForPersonNodes:(id)arg0 photoLibrary:(id)arg1 withProgressBlock:(id)arg2 ;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;


@end


#endif