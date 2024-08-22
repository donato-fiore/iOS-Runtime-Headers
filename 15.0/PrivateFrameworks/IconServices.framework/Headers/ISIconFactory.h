// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISICONFACTORY_H
#define ISICONFACTORY_H



#import "ISIcon.h"

@interface ISIconFactory : ISIcon



+(id)_iconForURL:(id)arg0 ;
+(id)_iconForURL:(id)arg0 options:(NSUInteger)arg1 ;
-(id)_init;
-(id)initWithApplicationBundleIdentifier:(id)arg0 ;
-(id)initWithApplicationExtensionBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleURL:(id)arg0 fileExtension:(id)arg1 ;
-(id)initWithBundleURL:(id)arg0 type:(id)arg1 ;
-(id)initWithFileExtension:(id)arg0 ;
-(id)initWithImages:(id)arg0 ;
-(id)initWithMIMEType:(id)arg0 ;
-(id)initWithModelCode:(id)arg0 ;
-(id)initWithResourceProxy:(id)arg0 ;
-(id)initWithType:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif