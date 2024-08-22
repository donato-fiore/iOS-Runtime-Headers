// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPHOTOEDITEXPORTERMETADATACONVERTER_H
#define PLPHOTOEDITEXPORTERMETADATACONVERTER_H

@class NSString;
@protocol PICompositionExporterMetadataConverter;

#import <Foundation/Foundation.h>


@interface PLPhotoEditExporterMetadataConverter : NSObject <PICompositionExporterMetadataConverter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)install;
-(BOOL)setImageVariation:(id)arg0 properties:(id)arg1 error:(*id)arg2 ;
-(BOOL)setPhotoFeatureFlags:(id)arg0 properties:(id)arg1 error:(*id)arg2 ;
-(BOOL)setPhotoProcessingFlags:(id)arg0 properties:(id)arg1 error:(*id)arg2 ;
-(id)photoFeatureFlags:(id)arg0 error:(*id)arg1 ;
-(id)photoProcessingFlagsFromProperties:(id)arg0 error:(*id)arg1 ;
-(id)videoMetadataForVariation:(id)arg0 error:(*id)arg1 ;


@end


#endif