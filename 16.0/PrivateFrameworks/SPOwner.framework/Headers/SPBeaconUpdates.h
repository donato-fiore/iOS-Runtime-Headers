// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPBEACONUPDATES_H
#define SPBEACONUPDATES_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPBeaconUpdates : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *emoji; // ivar: _emoji
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger roleId; // ivar: _roleId


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 roleId:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif