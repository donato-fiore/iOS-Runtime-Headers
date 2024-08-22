// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DYGTGPUTOOLSVERSIONINFO_H
#define DYGTGPUTOOLSVERSIONINFO_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DYGTGPUToolsVersionInfo : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDictionary *infoPlist; // ivar: _infoPlist
@property (nonatomic) unsigned int interposeVersionGL; // ivar: _interposeVersionGL
@property (nonatomic) unsigned int interposeVersionMetal; // ivar: _interposeVersionMetal
@property (copy, nonatomic) NSDictionary *versionPlist; // ivar: _versionPlist


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif