// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKCSSTYPEINFO_H
#define IKCSSTYPEINFO_H


#import <Foundation/Foundation.h>


@interface IKCSSTypeInfo : NSObject



+(id)getTypeInfoForPropertyName:(id)arg0 ;
+(void)registerStyle:(id)arg0 type:(NSUInteger)arg1 ;
+(void)unregisterStyles;


@end


#endif