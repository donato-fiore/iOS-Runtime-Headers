// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISBUNDLEICON_H
#define ISBUNDLEICON_H

@class NSString, NSURL;


#import "ISConcreteIcon.h"

@interface ISBundleIcon : ISConcreteIcon

@property (readonly) NSString *tag; // ivar: _tag
@property (readonly) NSString *tagClass; // ivar: _tagClass
@property (readonly) NSString *type; // ivar: _type
@property (readonly) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(CGFloat)_aspectRatio;
-(id)_makeAppResourceProvider;
-(id)_makeDocumentResourceProvider;
-(id)description;
-(id)initWithBundleURL:(id)arg0 ;
-(id)initWithBundleURL:(id)arg0 fileExtension:(id)arg1 ;
-(id)initWithBundleURL:(id)arg0 type:(id)arg1 ;
-(id)initWithBundleURL:(id)arg0 type:(id)arg1 tag:(id)arg2 tagClass:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)makeResourceProvider;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif