// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICLIBRARYAUTHSERVICECLIENTTOKENIDENTIFIER_H
#define ICLIBRARYAUTHSERVICECLIENTTOKENIDENTIFIER_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICLibraryAuthServiceClientTokenIdentifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *DSID; // ivar: _DSID
@property (readonly, copy, nonatomic) NSString *deviceGUID; // ivar: _deviceGUID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif