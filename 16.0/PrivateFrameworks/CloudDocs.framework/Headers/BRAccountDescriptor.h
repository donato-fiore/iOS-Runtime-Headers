// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRACCOUNTDESCRIPTOR_H
#define BRACCOUNTDESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BRAccountDescriptor : NSObject <NSSecureCoding>

 {
    NSString *_personaIdentifier;
}


@property (readonly, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) BOOL isDataSeparated; // ivar: _isDataSeparated
@property (readonly, nonatomic) NSString *organizationName; // ivar: _organizationName


+(BOOL)mightHaveDataSeparatedAccountDescriptor;
+(BOOL)supportsSecureCoding;
+(id)accountDescriptorForPersonaID:(id)arg0 ;
+(id)accountDescriptorForURL:(id)arg0 ;
+(id)allLoggedInAccountDescriptors;
+(void)clearAccountDescriptorCache;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersonaIdentifier:(id)arg0 accountIdentifier:(id)arg1 organizationName:(id)arg2 dataSeparated:(BOOL)arg3 ;
-(id)personaIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif