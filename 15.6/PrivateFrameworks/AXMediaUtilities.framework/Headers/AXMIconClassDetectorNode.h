// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMICONCLASSDETECTORNODE_H
#define AXMICONCLASSDETECTORNODE_H

@class NSArray, NSString;


#import "AXMMobileAssetEvaluationNode.h"
#import "iconclassification.h"

@interface AXMIconClassDetectorNode : AXMMobileAssetEvaluationNode

@property (readonly, nonatomic) NSArray *iconClassLabels; // ivar: _iconClassLabels
@property (retain, nonatomic) NSString *loggingName; // ivar: _loggingName
@property (readonly, nonatomic) iconclassification *mlModel;
@property (nonatomic) BOOL writeDebugImage; // ivar: _writeDebugImage


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(NSUInteger)maxSupportedFormatVersion;
-(NSUInteger)minSupportedFormatVersion;
-(id)_localizedClassForClass:(id)arg0 ;
-(id)classLabelForIdx:(NSUInteger)arg0 ;
-(id)mobileAssetType;
-(id)modelResourceNames;
-(void)_initializeClassLabels;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;


@end


#endif