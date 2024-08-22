// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSCLOUDKITTRANSPORTLOGCHANGETOKEN_H
#define IDSCLOUDKITTRANSPORTLOGCHANGETOKEN_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "IDSCKServerChangeToken.h"

@interface IDSCloudKitTransportLogChangeToken : NSObject <NSSecureCoding>



@property (retain, nonatomic) IDSCKServerChangeToken *ckToken; // ivar: _ckToken


+(BOOL)supportsSecureCoding;
-(id)initWithCKToken:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif