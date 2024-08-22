// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISICONRESOURCELOCATOR_H
#define ISICONRESOURCELOCATOR_H

@class NSString, NSDictionary, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ISIconResourceLocator : NSObject <NSSecureCoding>



@property (readonly) BOOL allowLocalizedIcon;
@property (copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy) NSDictionary *iconsDictionary; // ivar: _iconsDictionary
@property (copy) NSString *preferedResourceName; // ivar: _preferedResourceName
@property (retain) NSURL *resourceDirectoryURL; // ivar: _resourceDirectoryURL


+(BOOL)supportsSecureCoding;
+(id)genericIconrResourceLocator;
+(id)resourceLocatorWithLSIconResourceLocator:(id)arg0 ;
+(id)resourceLocatorWithType:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif