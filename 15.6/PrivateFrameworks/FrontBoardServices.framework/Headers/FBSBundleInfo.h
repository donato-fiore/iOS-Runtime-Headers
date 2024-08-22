// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSBUNDLEINFO_H
#define FBSBUNDLEINFO_H

@class NSString, NSURL, NSUUID;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface FBSBundleInfo : NSObject <BSDescriptionProviding>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *bundleType; // ivar: _bundleType
@property (readonly, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (readonly, copy, nonatomic) NSUUID *cacheGUID; // ivar: _cacheGUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (readonly) Class superclass;


-(id)_initWithBundleIdentifier:(id)arg0 url:(id)arg1 ;
-(id)_initWithBundleProxy:(id)arg0 bundleIdentifier:(id)arg1 url:(id)arg2 ;
-(id)_initWithBundleProxy:(id)arg0 overrideURL:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif