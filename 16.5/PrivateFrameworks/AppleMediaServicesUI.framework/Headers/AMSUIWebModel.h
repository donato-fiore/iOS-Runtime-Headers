// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBMODEL_H
#define AMSUIWEBMODEL_H


#import <Foundation/Foundation.h>


@interface AMSUIWebModel : NSObject



+(id)backgroundColorFromPageModel:(id)arg0 ;
+(id)impressionEventFromPageModel:(id)arg0 context:(id)arg1 ;
+(id)navigationBarFromPageModel:(id)arg0 context:(id)arg1 ;
+(id)pageModelFromJSObject:(id)arg0 context:(id)arg1 ;
+(struct CGSize )windowSizeFromJSObject:(id)arg0 key:(id)arg1 ;
+(struct CGSize )windowSizeFromPageModel:(id)arg0 ;


@end


#endif