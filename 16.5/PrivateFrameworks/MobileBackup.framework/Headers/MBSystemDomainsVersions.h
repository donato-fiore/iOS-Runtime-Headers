// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MBSYSTEMDOMAINSVERSIONS_H
#define MBSYSTEMDOMAINSVERSIONS_H


#import <Foundation/Foundation.h>


@interface MBSystemDomainsVersions : NSObject

@property (nonatomic) CGFloat maxSupportedVersion; // ivar: _maxSupportedVersion
@property (nonatomic) CGFloat minSupportedVersion; // ivar: _minSupportedVersion
@property (nonatomic) CGFloat version; // ivar: _version


-(id)init;
-(id)initWithDefaultSystemDomainsPlist;
-(id)initWithVersion:(CGFloat)arg0 minSupportedVersion:(CGFloat)arg1 maxSupportedVersion:(CGFloat)arg2 ;


@end


#endif