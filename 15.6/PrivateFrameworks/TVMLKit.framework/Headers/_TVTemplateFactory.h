// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVTEMPLATEFACTORY_H
#define _TVTEMPLATEFACTORY_H

@class NSBundle;

#import <Foundation/Foundation.h>


@interface _TVTemplateFactory : NSObject {
    NSBundle *_tvmlKitBundle;
}




-(id)init;
-(void)_registerCustomAnimators;
-(void)_registerStyleSheet:(id)arg0 forTemplate:(id)arg1 parentStyleSheets:(id)arg2 ;
-(void)_registerTemplateControllers;
-(void)registerProductTemplateURL:(id)arg0 forTemplateName:(id)arg1 includeParentStyleSheets:(BOOL)arg2 ;


@end


#endif