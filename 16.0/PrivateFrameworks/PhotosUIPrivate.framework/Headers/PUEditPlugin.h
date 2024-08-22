// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUEDITPLUGIN_H
#define PUEDITPLUGIN_H

@class UIApplicationExtensionActivity, NSExtension, UIImage, NSString;

#import <Foundation/Foundation.h>


@interface PUEditPlugin : NSObject

@property (readonly, nonatomic) UIApplicationExtensionActivity *applicationExtensionActivity; // ivar: _applicationExtensionActivity
@property (nonatomic) NSUInteger category; // ivar: _category
@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIImage *smallIcon;
@property (readonly, nonatomic) NSString *title;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithExtension:(id)arg0 pluginCategoryType:(NSUInteger)arg1 ;


@end


#endif