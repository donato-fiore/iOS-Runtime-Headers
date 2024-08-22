// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCLASSREGISTRAR_H
#define VNCLASSREGISTRAR_H


#import <Foundation/Foundation.h>


@interface VNClassRegistrar : NSObject



+(BOOL)getClassCode:(*unsigned int)arg0 forClass:(Class)arg1 error:(*id)arg2 ;
+(BOOL)getClassCode:(*unsigned int)arg0 forClassName:(id)arg1 error:(*id)arg2 ;
+(BOOL)observationBoundsAreNormalizedToROIForRequestClassCode:(unsigned int)arg0 revision:(NSUInteger)arg1 ;
+(BOOL)validateRequestClassName:(id)arg0 error:(*id)arg1 ;
+(Class)classForClassCode:(unsigned int)arg0 error:(*id)arg1 ;
+(id)classNameForClassCode:(unsigned int)arg0 error:(*id)arg1 ;


@end


#endif