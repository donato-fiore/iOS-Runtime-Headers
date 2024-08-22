// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAHYDRAKEYINFORMATION_H
#define DAHYDRAKEYINFORMATION_H

@class NSData, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DAHydraKeyInformation : NSObject <NSSecureCoding>



@property (readonly) NSData *appletIdentifier; // ivar: _appletIdentifier
@property (readonly) NSArray *certificateChain; // ivar: _certificateChain


+(BOOL)supportsSecureCoding;
+(id)withEndpoint:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif