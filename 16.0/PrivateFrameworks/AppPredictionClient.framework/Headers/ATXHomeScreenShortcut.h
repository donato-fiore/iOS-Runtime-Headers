// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHOMESCREENSHORTCUT_H
#define ATXHOMESCREENSHORTCUT_H

@class NSString;
@protocol ATXHomeScreenLeafIconRepresentable;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenShortcut : NSObject <ATXHomeScreenLeafIconRepresentable>



@property (readonly, copy, nonatomic) NSString *bundleIdentifierForDisplay; // ivar: _bundleIdentifierForDisplay
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) *CGImage icon; // ivar: _icon
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isAppLaunchWorkflow; // ivar: _isAppLaunchWorkflow
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXHomeScreenShortcut:(id)arg0 ;
-(id)dictionaryRepresentationForIntrospection;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 bundleIdentifierForDisplay:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 bundleIdentifierForDisplay:(id)arg2 isAppLaunchWorkflow:(BOOL)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif