// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HBXTYPESUPPORT_H
#define HBXTYPESUPPORT_H


#import <Foundation/Foundation.h>


@interface HBXTypeSupport : NSObject



+(NSInteger)categoryIdentifierForString:(id)arg0 ;
+(NSInteger)codeForType:(id)arg0 ;
+(id)categoryIdentifiersForType:(id)arg0 ;
+(id)categoryStringForIdentifier:(NSInteger)arg0 ;
+(id)displayNameForType:(id)arg0 inHealthStore:(id)arg1 ;
+(id)iconForType:(id)arg0 ;
+(id)makeTypeForCode:(NSInteger)arg0 ;
+(id)typesInCategory:(NSInteger)arg0 ;
+(void)enumerateDisplayCategoriesWithHandler:(id)arg0 ;


@end


#endif