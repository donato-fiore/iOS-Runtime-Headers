// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUDACCESSORY_H
#define AUDACCESSORY_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AUDAccessory : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *fwVersion; // ivar: _fwVersion
@property (readonly, copy, nonatomic) NSString *uid; // ivar: _uid


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUID:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif