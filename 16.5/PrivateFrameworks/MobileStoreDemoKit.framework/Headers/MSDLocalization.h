// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSDLOCALIZATION_H
#define MSDLOCALIZATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MSDLocalization : NSObject

@property (retain, nonatomic) NSDictionary *localizationTable; // ivar: _localizationTable


+(BOOL)getChannelWarningKeys:(*id)arg0 andPlaceHolderWarnings:(*id)arg1 forDeviceClass:(id)arg2 ;
+(BOOL)getRetailWarningKeys:(*id)arg0 andPlaceHolderWarnings:(*id)arg1 forDeviceClass:(id)arg2 ;
+(BOOL)getWarningKeys:(*id)arg0 andPlaceHolderWarnings:(*id)arg1 forOwnershipWarningFlag:(id)arg2 ;
+(id)getLocalizedOwnershipWarnings:(id)arg0 ;
+(id)sharedInstance;
+(void)fillInMissingLocales:(id)arg0 withOwnershipWarningMsg:(id)arg1 ;
-(id)init;
-(id)localizedStringWithKey:(id)arg0 defaultString:(id)arg1 ;


@end


#endif