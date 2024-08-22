// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISICONCACHECONFIGURATION_H
#define ISICONCACHECONFIGURATION_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ISIconCacheConfiguration : NSObject <NSSecureCoding>



@property (retain) NSString *salt; // ivar: _salt
@property (retain) NSString *sandboxExtension; // ivar: _sandboxExtension
@property (retain) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif