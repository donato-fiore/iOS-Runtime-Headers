// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNVALIDATIONUTILITIES_H
#define VNVALIDATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface VNValidationUtilities : NSObject



+(BOOL)_validateDetectedObjectObservations:(id)arg0 forObservationClass:(Class)arg1 withMinimumCount:(NSUInteger)arg2 forOptionalRequest:(id)arg3 error:(*id)arg4 ;
+(BOOL)_validateFaceObservations:(id)arg0 withMinimumCount:(NSUInteger)arg1 forOptionalRequest:(id)arg2 error:(*id)arg3 ;
+(BOOL)getArray:(*id)arg0 forKey:(id)arg1 inOptions:(id)arg2 withElementsOfClass:(Class)arg3 requiredMinimumCount:(NSUInteger)arg4 allowedMaximumCount:(NSUInteger)arg5 error:(*id)arg6 ;
+(BOOL)getBOOLValue:(*BOOL)arg0 forKey:(id)arg1 inOptions:(id)arg2 error:(*id)arg3 ;
+(BOOL)getBOOLValue:(*BOOL)arg0 forKey:(id)arg1 inOptions:(id)arg2 withDefaultValue:(BOOL)arg3 error:(*id)arg4 ;
+(BOOL)getDoubleValue:(*CGFloat)arg0 forKey:(id)arg1 inOptions:(id)arg2 error:(*id)arg3 ;
+(BOOL)getDoubleValue:(*CGFloat)arg0 forKey:(id)arg1 inOptions:(id)arg2 withDefaultValue:(CGFloat)arg3 error:(*id)arg4 ;
+(BOOL)getFloatValue:(*float)arg0 forKey:(id)arg1 inOptions:(id)arg2 error:(*id)arg3 ;
+(BOOL)getFloatValue:(*float)arg0 forKey:(id)arg1 inOptions:(id)arg2 minimumValue:(float)arg3 maximumValue:(float)arg4 error:(*id)arg5 ;
+(BOOL)getFloatValue:(*float)arg0 forKey:(id)arg1 inOptions:(id)arg2 withDefaultValue:(float)arg3 error:(*id)arg4 ;
+(BOOL)getIntValue:(*int)arg0 forKey:(id)arg1 inOptions:(id)arg2 error:(*id)arg3 ;
+(BOOL)getIntValue:(*int)arg0 forKey:(id)arg1 inOptions:(id)arg2 minimumValue:(int)arg3 maximumValue:(int)arg4 error:(*id)arg5 ;
+(BOOL)getIntValue:(*int)arg0 forKey:(id)arg1 inOptions:(id)arg2 withDefaultValue:(int)arg3 error:(*id)arg4 ;
+(BOOL)getMTLGPUPriority:(*NSUInteger)arg0 forKey:(id)arg1 inOptions:(id)arg2 withDefaultValue:(NSUInteger)arg3 error:(*id)arg4 ;
+(BOOL)getNSIntegerValue:(*NSInteger)arg0 forKey:(id)arg1 inOptions:(id)arg2 withDefaultValue:(NSInteger)arg3 error:(*id)arg4 ;
+(BOOL)getNSUIntegerValue:(*NSUInteger)arg0 forKey:(id)arg1 inOptions:(id)arg2 error:(*id)arg3 ;
+(BOOL)getNSUIntegerValue:(*NSUInteger)arg0 forKey:(id)arg1 inOptions:(id)arg2 withDefaultValue:(NSUInteger)arg3 error:(*id)arg4 ;
+(BOOL)getOSTypeValue:(*unsigned int)arg0 forKey:(id)arg1 inOptions:(id)arg2 error:(*id)arg3 ;
+(BOOL)getOSTypeValue:(*unsigned int)arg0 forKey:(id)arg1 inOptions:(id)arg2 withDefaultValue:(unsigned int)arg3 error:(*id)arg4 ;
+(BOOL)getOptionalArray:(*id)arg0 forKey:(id)arg1 inOptions:(id)arg2 withElementsOfClass:(Class)arg3 error:(*id)arg4 ;
+(BOOL)getOptionalExplicitProcessingDevice:(*id)arg0 inOptions:(id)arg1 error:(*id)arg2 ;
+(BOOL)getOptionalObject:(*id)arg0 ofClass:(Class)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(*id)arg4 ;
+(BOOL)getOptionalOriginatingRequestSpecifier:(*id)arg0 forKey:(id)arg1 inOptions:(id)arg2 specifyingSupportedRevisionsForRequestClass:(Class)arg3 error:(*id)arg4 ;
+(BOOL)getPercentageValue:(*CGFloat)arg0 forKey:(id)arg1 inOptions:(id)arg2 withDefaultValue:(CGFloat)arg3 error:(*id)arg4 ;
+(BOOL)validateArray:(id)arg0 named:(id)arg1 hasElementsOfClass:(Class)arg2 requiredMinimumCount:(NSUInteger)arg3 allowedMaximumCount:(NSUInteger)arg4 error:(*id)arg5 ;
+(BOOL)validateClassArray:(id)arg0 named:(id)arg1 hasElementsAncestoredFromClass:(Class)arg2 requiredMinimumCount:(NSUInteger)arg3 allowedMaximumCount:(NSUInteger)arg4 error:(*id)arg5 ;
// +(BOOL)validateNonZeroImageWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 componentNameProvidingBlock:(id)arg2 error:(unk)arg3  ;
+(BOOL)validateOptionalDetectedObjectObservations:(id)arg0 forObservationClass:(Class)arg1 error:(*id)arg2 ;
+(BOOL)validateOptionalDetectedObjectObservations:(id)arg0 forObservationClass:(Class)arg1 forRequest:(id)arg2 error:(*id)arg3 ;
+(BOOL)validateOptionalFaceObservations:(id)arg0 error:(*id)arg1 ;
+(BOOL)validateOptionalFaceObservations:(id)arg0 forRequest:(id)arg1 error:(*id)arg2 ;
+(BOOL)validateRequiredClusterIDs:(id)arg0 error:(*id)arg1 ;
+(BOOL)validateRequiredDetectedObjectObservations:(id)arg0 forObservationClass:(Class)arg1 error:(*id)arg2 ;
+(BOOL)validateRequiredDetectedObjectObservations:(id)arg0 forObservationClass:(Class)arg1 forRequest:(id)arg2 error:(*id)arg3 ;
+(BOOL)validateRequiredFaceObservations:(id)arg0 error:(*id)arg1 ;
+(BOOL)validateRequiredFaceObservations:(id)arg0 forRequest:(id)arg1 error:(*id)arg2 ;
+(BOOL)validateScoreRange:(float)arg0 error:(*id)arg1 ;
+(BOOL)validateVNConfidenceRange:(float)arg0 error:(*id)arg1 ;
+(id)faceObservationsInOptions:(id)arg0 withOptionName:(id)arg1 error:(*id)arg2 ;
+(id)originatingRequestSpecifierForKey:(id)arg0 inOptions:(id)arg1 error:(*id)arg2 ;
+(id)originatingRequestSpecifierForKey:(id)arg0 inOptions:(id)arg1 specifyingSupportedRevisionsForRequestClass:(Class)arg2 error:(*id)arg3 ;
+(id)originatingRequestSpecifierInOptions:(id)arg0 error:(*id)arg1 ;
+(id)originatingRequestSpecifierInOptions:(id)arg0 specifyingSupportedRevisionsForRequestClass:(Class)arg1 error:(*id)arg2 ;
+(id)requiredArrayForKey:(id)arg0 inOptions:(id)arg1 withElementsOfClass:(Class)arg2 error:(*id)arg3 ;
+(id)requiredDetectedObjectObservationInOptions:(id)arg0 withOptionName:(id)arg1 forObservationClass:(Class)arg2 error:(*id)arg3 ;
+(id)requiredFaceObservationInOptions:(id)arg0 withOptionName:(id)arg1 error:(*id)arg2 ;
+(id)requiredObjectOfClass:(Class)arg0 forKey:(id)arg1 inOptions:(id)arg2 error:(*id)arg3 ;
+(id)requiredProcessingDeviceInOptions:(id)arg0 error:(*id)arg1 ;
+(id)requiredSessionInOptions:(id)arg0 error:(*id)arg1 ;


@end


#endif