// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCPROFILEINFO_H
#define MCPROFILEINFO_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MCProfileInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *UUID; // ivar: _UUID
@property (retain, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (retain, nonatomic) NSString *friendlyName; // ivar: _friendlyName
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isInstalledByDeclarativeManagement; // ivar: _isInstalledByDeclarativeManagement
@property (retain, nonatomic) NSString *organization; // ivar: _organization
@property (retain, nonatomic) NSString *profileDescription; // ivar: _profileDescription


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif