// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INRELEVANTSHORTCUT_H
#define INRELEVANTSHORTCUT_H

@class NSString, NSArray;
@protocol INKeyImageProducing, INImageProxyInjecting, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "INImage.h"
#import "INShortcut.h"
#import "INDefaultCardTemplate.h"

@interface INRelevantShortcut : NSObject <INKeyImageProducing, INImageProxyInjecting, NSSecureCoding, NSCopying>



@property (readonly) INImage *_keyImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *relevanceProviders; // ivar: _relevanceProviders
@property (copy, nonatomic) INShortcut *shortcut; // ivar: _shortcut
@property (nonatomic) NSInteger shortcutRole; // ivar: _shortcutRole
@property (readonly) Class superclass;
@property (copy, nonatomic) INDefaultCardTemplate *watchTemplate; // ivar: _watchTemplate
@property (copy, nonatomic) NSString *widgetKind; // ivar: _widgetKind


+(BOOL)supportsSecureCoding;
-(NSInteger)_compareSubProducerOne:(id)arg0 subProducerTwo:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShortcut:(id)arg0 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif