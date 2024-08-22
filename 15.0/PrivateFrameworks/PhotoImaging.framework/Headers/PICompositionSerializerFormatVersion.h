// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PICOMPOSITIONSERIALIZERFORMATVERSION_H
#define PICOMPOSITIONSERIALIZERFORMATVERSION_H


#import <Foundation/Foundation.h>


@interface PICompositionSerializerFormatVersion : NSObject



+(BOOL)adjustmentHasCTM:(id)arg0 settings:(id)arg1 ;
+(BOOL)adjustmentHasPerspective:(id)arg0 settings:(id)arg1 ;
+(id)_versionRules;
+(id)adjustmentDataFormatVersionForComposition:(id)arg0 ;
+(id)currentFormatVersion;
+(id)formatVersionForAdjustment:(id)arg0 identifier:(id)arg1 ;
+(id)locallySupportedFormatVersions;
+(id)versionRules;


@end


#endif