// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSCONFIGUREDWIDGETCONTAINERDESCRIPTOR_H
#define CHSCONFIGUREDWIDGETCONTAINERDESCRIPTOR_H

@class NSString, NSArray;
@protocol BSDescriptionProviding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CHSConfiguredWidgetDescriptor.h"

@interface CHSConfiguredWidgetContainerDescriptor : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding>

 {
    NSString *_activeWidgetUniqueIdentifier;
    NSInteger _activeWidgetIndex;
}


@property (readonly, nonatomic) CHSConfiguredWidgetDescriptor *activeWidget;
@property (readonly, nonatomic) BOOL canAppearInSecureEnvironment; // ivar: _canAppearInSecureEnvironment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger family; // ivar: _family
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSystemConfigured;
@property (readonly, nonatomic) NSInteger location; // ivar: _location
@property (readonly, nonatomic) NSUInteger page; // ivar: _page
@property (readonly, nonatomic, getter=isStack) BOOL stack; // ivar: _stack
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, copy, nonatomic) NSArray *widgets; // ivar: _widgets


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 location:(NSInteger)arg1 canAppearInSecureEnvironment:(BOOL)arg2 page:(NSUInteger)arg3 family:(NSInteger)arg4 widgets:(id)arg5 activeWidget:(id)arg6 ;
-(id)initWithUniqueIdentifier:(id)arg0 location:(NSInteger)arg1 page:(NSUInteger)arg2 family:(NSInteger)arg3 widgets:(id)arg4 activeWidget:(id)arg5 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif