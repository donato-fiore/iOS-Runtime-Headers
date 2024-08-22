// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTASSETREQUEST_H
#define DTASSETREQUEST_H

@class NSString, DTXMessage;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DTAssetRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *assetPath; // ivar: _assetPath
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) DTXMessage *message;


+(BOOL)supportsSecureCoding;
+(id)requestWithIdentifier:(id)arg0 path:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 path:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif