// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INWIDGETDESCRIPTOR_H
#define INWIDGETDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface INWidgetDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly, copy, nonatomic) NSString *intentClassName; // ivar: _intentClassName
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind
@property (readonly, nonatomic) CGSize preferredSize;
@property (readonly, nonatomic) NSInteger preferredSizeClass; // ivar: _preferredSizeClass


-(BOOL)supportsIntent:(id)arg0 ;
-(id)_extensionRecordWithError:(*id)arg0 ;
-(id)description;
-(id)initWithExtensionBundleIdentifier:(id)arg0 kind:(id)arg1 intentClassName:(id)arg2 preferredSizeClass:(NSInteger)arg3 ;


@end


#endif