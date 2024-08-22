// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFSIGNEDDATA_H
#define _SFSIGNEDDATA_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SFSignedData : NSObject <NSCopying, NSSecureCoding>

 {
    id *_signedDataInternal;
}


@property (readonly) NSData *data;
@property (readonly) NSData *signature;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 signature:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif