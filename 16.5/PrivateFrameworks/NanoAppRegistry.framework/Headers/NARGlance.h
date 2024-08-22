// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NARGLANCE_H
#define NARGLANCE_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NARGlance : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *appID; // ivar: _appID
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *glanceID; // ivar: _glanceID
@property (copy, nonatomic) NSDictionary *localizedDisplayNameMap; // ivar: _localizedDisplayNameMap


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif