// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROFREEZEINFO_H
#define MIROFREEZEINFO_H

@class NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MiroFreezeInfo : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSData *dataRepresentation;
@property (readonly, nonatomic) BOOL isAdded; // ivar: _isAdded
@property (readonly, nonatomic) BOOL isFreeze; // ivar: _isFreeze
@property (readonly, nonatomic) BOOL isRemoved; // ivar: _isRemoved


+(BOOL)supportsSecureCoding;
+(id)freezeInfoWithData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif