// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NIUTILS_H
#define NIUTILS_H


#import <Foundation/Foundation.h>


@interface NIUtils : NSObject



+(BOOL)isIntValidAntennaDiversityOverride:(NSInteger)arg0 ;
+(BOOL)isIntValidRelationshipSpecifier:(NSInteger)arg0 ;
+(id)AntennaDiversityOverrideToString:(NSInteger)arg0 ;
+(id)NIRelationshipSpecifierToString:(NSUInteger)arg0 ;
+(id)NISessionBackgroundModeToString:(NSInteger)arg0 ;


@end


#endif