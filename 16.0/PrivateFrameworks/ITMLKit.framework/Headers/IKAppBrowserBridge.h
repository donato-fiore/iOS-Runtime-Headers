// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKAPPBROWSERBRIDGE_H
#define IKAPPBROWSERBRIDGE_H

@class NSString;
@protocol IKDOMFeature, IKAppBrowser;

#import <Foundation/Foundation.h>

#import "IKAppContext.h"

@interface IKAppBrowserBridge : NSObject <IKDOMFeature>



@property (weak, nonatomic) NSObject<IKAppBrowser> *appBrowser; // ivar: _appBrowser
@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) UIEdgeInsets maskInset; // ivar: _maskInset
@property (readonly) Class superclass;


+(id)makeFeatureJSObjectForFeature:(id)arg0 ;
-(id)initWithDOMNode:(id)arg0 featureName:(id)arg1 ;
-(void)present;


@end


#endif