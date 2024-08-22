// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPBEACONTASKINFORMATION_H
#define SPBEACONTASKINFORMATION_H

@class NSUUID, NSError, NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPBeaconTaskInformation : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *commandIdentifier; // ivar: _commandIdentifier
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 lastUpdated:(id)arg1 error:(id)arg2 state:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif