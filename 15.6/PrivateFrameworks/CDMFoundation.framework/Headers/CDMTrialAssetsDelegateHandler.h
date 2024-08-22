// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMTRIALASSETSDELEGATEHANDLER_H
#define CDMTRIALASSETSDELEGATEHANDLER_H

@class NSArray, NSMutableDictionary;
@protocol CDMTrialAssetsDelegate;

#import <Foundation/Foundation.h>


@interface CDMTrialAssetsDelegateHandler : NSObject {
    id<CDMTrialAssetsDelegate> *_delegate;
    NSArray *_namespaceNames;
    NSMutableDictionary *_assetsAvailabilities;
}




-(BOOL)assetsAvailableForNamespace:(id)arg0 forLocale:(id)arg1 ;
-(BOOL)assetsUnavailableForNamespace:(id)arg0 ;
-(id)initWithAssetsDelegate:(id)arg0 forNamespaces:(id)arg1 ;
-(void)notifyDelegate;


@end


#endif