// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKELECTROCARDIOGRAMREGULATEDVERSION_H
#define HKELECTROCARDIOGRAMREGULATEDVERSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HKElectrocardiogramRegulatedVersion : NSObject

@property (readonly, copy, nonatomic) NSString *featureVersion; // ivar: _featureVersion
@property (readonly, copy, nonatomic) NSString *updateVersion; // ivar: _updateVersion


-(BOOL)_validateSourceVersion:(id)arg0 algorithmVersion:(NSInteger)arg1 ;
-(id)_featureVersionFromUpdateVersion:(id)arg0 ;
-(id)_updateVersionFromSourceVersion:(id)arg0 algorithmVersion:(NSInteger)arg1 ;
-(id)initWithSourceVersion:(id)arg0 algorithmVersion:(NSInteger)arg1 ;


@end


#endif