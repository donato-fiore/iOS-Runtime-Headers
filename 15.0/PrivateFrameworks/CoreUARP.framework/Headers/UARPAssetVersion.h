// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPASSETVERSION_H
#define UARPASSETVERSION_H


#import <Foundation/Foundation.h>


@interface UARPAssetVersion : NSObject

@property (readonly) NSUInteger buildVersion; // ivar: _buildVersion
@property (readonly) NSUInteger majorVersion; // ivar: _majorVersion
@property (readonly) NSUInteger minorVersion; // ivar: _minorVersion
@property (readonly) NSUInteger releaseVersion; // ivar: _releaseVersion


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMajorVersion:(NSUInteger)arg0 minorVersion:(NSUInteger)arg1 releaseVersion:(NSUInteger)arg2 buildVersion:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif