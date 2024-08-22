// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISICONTYPERESOURCELOCATOR_H
#define ISICONTYPERESOURCELOCATOR_H

@class NSString;
@protocol NSSecureCoding;


#import "ISIconResourceLocator.h"

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding>



@property (readonly) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)allowLocalizedIcon;
-(id)bundleIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 ;
-(id)preferedResourceName;
-(id)resourceDirectoryURL;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif