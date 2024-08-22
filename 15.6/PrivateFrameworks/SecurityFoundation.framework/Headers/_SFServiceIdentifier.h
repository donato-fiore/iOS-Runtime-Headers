// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFSERVICEIDENTIFIER_H
#define _SFSERVICEIDENTIFIER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SFServiceIdentifier : NSObject <NSCopying, NSSecureCoding>

 {
    id *_serviceIdentifierInternal;
}


@property (readonly, copy, nonatomic, getter=_lookupKey) NSString *lookupKey;
@property (readonly, copy, nonatomic) NSString *serviceID;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
+(id)serviceIdentifierForAccessGroup:(id)arg0 ;
+(id)serviceIdentifierForBundleID:(id)arg0 ;
+(id)serviceIdentifierForCustomString:(id)arg0 ;
+(id)serviceIdentifierForDomain:(id)arg0 ;
+(id)serviceIdentifierForURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceID:(id)arg0 forType:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif