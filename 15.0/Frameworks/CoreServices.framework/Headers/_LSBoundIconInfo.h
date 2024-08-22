// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSBOUNDICONINFO_H
#define _LSBOUNDICONINFO_H

@class NSURL, NSString, NSArray, NSDictionary;
@protocol LSIconResourceLocator, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_LSLazyPropertyList.h"

@interface _LSBoundIconInfo : NSObject <LSIconResourceLocator, NSSecureCoding>

 {
    BOOL _prerendered;
    BOOL _badge;
    BOOL _documentAllowOverride;
    NSURL *_containerURL;
    NSURL *_dataContainerURL;
    _LSLazyPropertyList *_iconsDictionary;
    NSString *_cacheKey;
    NSArray *_fileNames;
}


@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly) NSDictionary *bundleIconsDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *resourcesDirectoryURL; // ivar: _resourcesDirectoryURL
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif