// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMDFMIPACCOUNTINFO_H
#define FMDFMIPACCOUNTINFO_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDFMIPAccountInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *dsid; // ivar: _dsid
@property (copy, nonatomic) NSString *oneTimeRemoveAuthToken; // ivar: _oneTimeRemoveAuthToken
@property (copy) NSURL *serverURL; // ivar: _serverURL
@property (copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserName:(id)arg0 dsid:(id)arg1 oneTimeRemoveAuthToken:(id)arg2 serverURL:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif