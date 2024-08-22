// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKJSBROWSER_H
#define IKJSBROWSER_H

@class NSDictionary;
@protocol IKJSBrowser;


#import "IKJSObject.h"
#import "IKAppBrowserBridge.h"

@interface IKJSBrowser : IKJSObject <IKJSBrowser>



@property (retain, nonatomic) IKAppBrowserBridge *bridge; // ivar: _bridge
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (retain, nonatomic) NSDictionary *maskInset; // ivar: _maskInset


-(void)present;


@end


#endif