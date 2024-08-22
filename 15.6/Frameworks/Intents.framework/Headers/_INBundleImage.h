// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INBUNDLEIMAGE_H
#define _INBUNDLEIMAGE_H

@class NSString;


#import "INImage.h"
#import "INImageBundle.h"

@interface _INBundleImage : INImage

@property (copy, nonatomic) INImageBundle *imageBundle; // ivar: _imageBundle
@property (copy, nonatomic) NSString *imageName; // ivar: _imageName


+(BOOL)supportsSecureCoding;
-(BOOL)_isSystem;
-(BOOL)_requiresRetrieval;
-(id)_URLRepresentation;
-(id)_bundleIdentifier;
-(id)_bundlePath;
-(id)_copyWithSubclass:(Class)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_identifier;
-(id)_initWithURLRepresentation:(id)arg0 ;
-(id)_name;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStringRepresentation:(id)arg0 ;
-(id)stringRepresentation;
-(void)_loadImageDataAndSizeWithHelper:(id)arg0 accessSpecifier:(id)arg1 completion:(id)arg2 ;
-(void)_setBundleIdentifier:(id)arg0 ;
-(void)_setBundlePath:(id)arg0 ;
-(void)_setName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif