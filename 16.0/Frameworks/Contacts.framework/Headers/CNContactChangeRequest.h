// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTCHANGEREQUEST_H
#define CNCONTACTCHANGEREQUEST_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNContactChangeRequest : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *contactIdentifiers;
@property (readonly, copy, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, copy, nonatomic) NSString *linkIdentifier; // ivar: _linkIdentifier


+(BOOL)supportsSecureCoding;
+(id)contactChangeRequestWithKind:(NSInteger)arg0 contacts:(id)arg1 linkIdentifier:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKind:(NSInteger)arg0 contacts:(id)arg1 linkIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif