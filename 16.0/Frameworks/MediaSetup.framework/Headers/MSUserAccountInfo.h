// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSUSERACCOUNTINFO_H
#define MSUSERACCOUNTINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSUserAccountInfo : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *homeUserID; // ivar: _homeUserID
@property (readonly, copy, nonatomic) NSString *sharedUserID; // ivar: _sharedUserID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHomeUserID:(id)arg0 sharedUserID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif