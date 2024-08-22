// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSWEBEXTENSIONPORTINFO_H
#define WBSWEBEXTENSIONPORTINFO_H

@class NSString, NSUUID, WKWebView;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionPortInfo : NSObject

@property (copy, nonatomic) NSString *destinationApplicationID; // ivar: _destinationApplicationID
@property (retain, nonatomic) NSUUID *destinationID; // ivar: _destinationID
@property (weak, nonatomic) WKWebView *destinationWebView; // ivar: _destinationWebView
@property (retain, nonatomic) NSUUID *extensionID; // ivar: _extensionID
@property (retain, nonatomic) NSUUID *sourceID; // ivar: _sourceID
@property (weak, nonatomic) WKWebView *sourceWebView; // ivar: _sourceWebView


-(id)description;
-(id)initWithExtensionID:(id)arg0 sourceID:(id)arg1 sourceWebView:(id)arg2 destinationApplicationID:(id)arg3 ;
-(id)initWithExtensionID:(id)arg0 sourceID:(id)arg1 sourceWebView:(id)arg2 destinationID:(id)arg3 destinationWebView:(id)arg4 ;


@end


#endif