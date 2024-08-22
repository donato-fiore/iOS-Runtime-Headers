// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISBUNDLEIDENTIFIERICON_H
#define ISBUNDLEIDENTIFIERICON_H

@class NSString;


#import "ISConcreteIcon.h"

@interface ISBundleIdentifierIcon : ISConcreteIcon

@property (readonly) NSString *bundleIdentifier; // ivar: _bundleIdentifier


+(BOOL)supportsSecureCoding;
-(CGFloat)_aspectRatio;
-(id)_makeResourceProviderAllowIconResourceFallback:(BOOL)arg0 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)makeResourceProvider;
-(id)makeSymbolResourceProvider;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif