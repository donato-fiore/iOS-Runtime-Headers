// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTCSECUREHIERARCHYTOKEN_H
#define RTCSECUREHIERARCHYTOKEN_H

@class NSString;
@protocol NSSecureCoding, NSCoding;

#import <Foundation/Foundation.h>


@interface RTCSecureHierarchyToken : NSObject <NSSecureCoding, NSCoding>



@property (nonatomic) int level; // ivar: _level
@property (copy, nonatomic) NSString *token; // ivar: _token


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithToken:(id)arg0 level:(int)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif