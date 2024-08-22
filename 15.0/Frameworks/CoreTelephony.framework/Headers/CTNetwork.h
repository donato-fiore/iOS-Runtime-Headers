// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTNETWORK_H
#define CTNETWORK_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTNetwork : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *plmn; // ivar: _plmn
@property (retain, nonatomic) NSString *rat; // ivar: _rat


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif