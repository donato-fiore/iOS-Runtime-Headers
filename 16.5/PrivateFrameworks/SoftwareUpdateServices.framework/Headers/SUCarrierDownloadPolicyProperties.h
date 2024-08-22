// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCARRIERDOWNLOADPOLICYPROPERTIES_H
#define SUCARRIERDOWNLOADPOLICYPROPERTIES_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUCarrierDownloadPolicyProperties : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_keyMap;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_boolForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)_isValidHour:(NSInteger)arg0 ;
-(BOOL)allowInexpensiveHDMUnlimited;
-(BOOL)isAutoDownloadAllowable;
-(BOOL)isDownloadAllowable;
-(BOOL)isDownloadAllowableOver2G;
-(BOOL)isDownloadFree;
-(NSInteger)_integerForKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(NSInteger)_longLongForKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(NSInteger)maximumDownloadSizeInBytes;
-(NSInteger)peakEndHour;
-(NSInteger)peakStartHour;
-(NSUInteger)_unsignedIntegerForKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(NSUInteger)numberOfDaysToWaitForCellularDownload;
-(id)_numberForKey:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif