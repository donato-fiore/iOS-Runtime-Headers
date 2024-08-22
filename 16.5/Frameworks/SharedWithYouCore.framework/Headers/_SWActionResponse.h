// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWACTIONRESPONSE_H
#define _SWACTIONRESPONSE_H

@class NSError, BSActionResponse;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SWActionResponse : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BSActionResponse *sourceBSActionResponse; // ivar: _sourceBSActionResponse
@property (nonatomic) BOOL success; // ivar: _success


+(BOOL)supportsSecureCoding;
+(id)responseWithDestinationResponse:(id)arg0 ;
+(id)responseWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToActionResponse:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestinationResponse:(id)arg0 ;
-(id)initWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)encodeWithBSActionResponseSettings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif