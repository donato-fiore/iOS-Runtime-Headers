// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCALLDIRECTORYIDENTIFICATIONENTRY_H
#define CXCALLDIRECTORYIDENTIFICATIONENTRY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CXCallDirectoryIdentificationEntry : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (copy, nonatomic) NSString *localizedExtensionContainingAppName; // ivar: _localizedExtensionContainingAppName
@property (copy, nonatomic) NSString *localizedExtensionName; // ivar: _localizedExtensionName
@property (copy, nonatomic) NSString *localizedLabel; // ivar: _localizedLabel


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif