// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSHORTCUT_H
#define INSHORTCUT_H

@class NSString, NSData, NSUserActivity, NSArray;
@protocol INKeyImageProducing, NSItemProviderReading, NSItemProviderWriting, INImageProxyInjecting, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "INImage.h"
#import "INIntent.h"

@interface INShortcut : NSObject <INKeyImageProducing, NSItemProviderReading, NSItemProviderWriting, INImageProxyInjecting, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *_associatedAppBundleIdentifier;
@property (readonly) INImage *_keyImage;
@property (readonly, nonatomic) NSString *_subtitle;
@property (readonly, nonatomic) NSString *_title;
@property (readonly, copy, nonatomic) NSString *activityBundleIdentifier; // ivar: _activityBundleIdentifier
@property (readonly, copy, nonatomic) NSData *activityData; // ivar: _activityData
@property (readonly, copy, nonatomic) INImage *activityImage; // ivar: _activityImage
@property (readonly, copy, nonatomic) NSString *activitySubtitle; // ivar: _activitySubtitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(BOOL)supportsSecureCoding;
+(NSInteger)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg0 ;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_compareSubProducerOne:(id)arg0 subProducerTwo:(id)arg1 ;
-(id)_initWithIntent:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithActivityData:(id)arg0 activityImage:(id)arg1 activitySubtitle:(id)arg2 activityBundleIdentifier:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntent:(id)arg0 ;
-(id)initWithUserActivity:(id)arg0 ;
-(id)initWithUserActivity:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(id)shortcutWithActivityBundleIdentifier:(id)arg0 ;
-(id)shortcutWithActivityImage:(id)arg0 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif