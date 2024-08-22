// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPASSETVERSION_H
#define UARPASSETVERSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UARPAssetVersion : NSObject

@property (readonly) NSUInteger buildVersion; // ivar: _buildVersion
@property (readonly) BOOL isValid;
@property (readonly) NSUInteger majorVersion; // ivar: _majorVersion
@property (readonly) NSUInteger minorVersion; // ivar: _minorVersion
@property (readonly) NSUInteger releaseVersion; // ivar: _releaseVersion
@property (readonly) NSString *versionString;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMajorVersion:(NSUInteger)arg0 minorVersion:(NSUInteger)arg1 releaseVersion:(NSUInteger)arg2 buildVersion:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif