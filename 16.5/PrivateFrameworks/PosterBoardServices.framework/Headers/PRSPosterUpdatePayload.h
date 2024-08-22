// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSPOSTERUPDATEPAYLOAD_H
#define PRSPOSTERUPDATEPAYLOAD_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PRSPosterUpdatePayload : NSObject <NSSecureCoding, NSCopying>





+(BOOL)supportsSecureCoding;
+(id)nullPayload;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)rawValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif