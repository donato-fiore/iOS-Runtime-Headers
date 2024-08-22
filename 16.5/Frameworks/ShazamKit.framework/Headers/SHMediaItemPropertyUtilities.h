// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHMEDIAITEMPROPERTYUTILITIES_H
#define SHMEDIAITEMPROPERTYUTILITIES_H


#import <Foundation/Foundation.h>


@interface SHMediaItemPropertyUtilities : NSObject



+(BOOL)isShazamKitDefinedMediaItemProperty:(id)arg0 ;
+(Class)jsonRepresentationTypeForProperty:(id)arg0 ;
+(Class)typeForShazamKitProperty:(id)arg0 ;
+(NSInteger)categoryForShazamKitProperty:(id)arg0 ;
+(void)buildPropertySets;


@end


#endif