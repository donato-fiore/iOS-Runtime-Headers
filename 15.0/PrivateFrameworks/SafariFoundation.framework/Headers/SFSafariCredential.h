// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSAFARICREDENTIAL_H
#define SFSAFARICREDENTIAL_H

@class NSDate, NSString;
@protocol NSSecureCoding, SFSafariPasswordCredential;

#import <Foundation/Foundation.h>


@interface SFSafariCredential : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, nonatomic) NSObject<SFSafariPasswordCredential> *externalCredential; // ivar: _externalCredential
@property (readonly, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSString *site; // ivar: _site
@property (readonly, nonatomic) NSString *user; // ivar: _user


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalCredential:(id)arg0 ;
-(id)initWithUser:(id)arg0 password:(id)arg1 site:(id)arg2 creationDate:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif