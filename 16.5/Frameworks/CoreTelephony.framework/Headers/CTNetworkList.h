// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTNETWORKLIST_H
#define CTNETWORKLIST_H

@class NSMutableArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTNetworkList : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL moreComing; // ivar: _moreComing
@property (retain, nonatomic) NSMutableArray *networks; // ivar: _networks


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif