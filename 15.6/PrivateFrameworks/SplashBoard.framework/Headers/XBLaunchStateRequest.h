// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XBLAUNCHSTATEREQUEST_H
#define XBLAUNCHSTATEREQUEST_H

@class NSString, FBSDisplayConfiguration;
@protocol BSXPCCoding, NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "XBDisplayEdgeInsetsWrapper.h"

@interface XBLaunchStateRequest : NSObject <BSXPCCoding, NSCopying, BSDescriptionProviding>



@property (retain, nonatomic) XBDisplayEdgeInsetsWrapper *customSafeAreaInsets; // ivar: _customSafeAreaInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration; // ivar: _displayConfiguration
@property (copy, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (copy, nonatomic) NSString *launchInterfaceIdentifier; // ivar: _launchInterfaceIdentifier
@property (nonatomic) CGSize naturalSize; // ivar: _naturalSize
@property (nonatomic) CGSize referenceSize; // ivar: _referenceSize
@property (nonatomic) NSUInteger statusBarState; // ivar: _statusBarState
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *urlSchemeName; // ivar: _urlSchemeName
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif