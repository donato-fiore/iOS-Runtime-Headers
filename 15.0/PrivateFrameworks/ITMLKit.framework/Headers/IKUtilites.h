// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKUTILITES_H
#define IKUTILITES_H


#import <Foundation/Foundation.h>


@interface IKUtilites : NSObject



+(BOOL)isAppTrusted;
+(BOOL)isAppleTV;
+(BOOL)runningAnInternalBuild;
+(id)_arrayByAddingValuesFromArrayOfDictionaries:(id)arg0 ;
+(id)_entriesBySectionIndexForArrayOfStringEntries:(id)arg0 currentCollation:(id)arg1 ;
+(id)sort:(id)arg0 options:(id)arg1 ;


@end


#endif