// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKAPPLICATIONMANIFESTICON_H
#define _WKAPPLICATIONMANIFESTICON_H

@class NSArray, NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _WKApplicationManifestIcon : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *purposes; // ivar: _purposes
@property (readonly, copy, nonatomic) NSArray *sizes; // ivar: _sizes
@property (readonly, copy, nonatomic) NSURL *src; // ivar: _src
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoreIcon:(*void)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif