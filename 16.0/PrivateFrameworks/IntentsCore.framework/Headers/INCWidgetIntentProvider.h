// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCWIDGETINTENTPROVIDER_H
#define INCWIDGETINTENTPROVIDER_H


#import <Foundation/Foundation.h>


@interface INCWidgetIntentProvider : NSObject



+(void)initialize;
-(id)intentsExtensionForExtension:(id)arg0 compatibleWithIntent:(id)arg1 error:(*id)arg2 ;
-(void)provideIntentWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif