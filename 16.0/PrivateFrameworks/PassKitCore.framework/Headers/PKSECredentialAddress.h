// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSECREDENTIALADDRESS_H
#define PKSECREDENTIALADDRESS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PKSECredentialAddress.h"

@interface PKSECredentialAddress : NSObject <NSCopying>

 {
    PKSECredentialAddress *_next;
    NSString *_identifier;
    NSUInteger _type;
}


@property (readonly, nonatomic) NSString *appletIdentifier;
@property (readonly, nonatomic) NSString *mostSpecificIdentifier;
@property (readonly, nonatomic) NSUInteger mostSpecificType;
@property (readonly, nonatomic) NSString *subcredentialIdentifier;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)addressByAppendingType:(NSUInteger)arg0 identifier:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)firstIdentifierOfType:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithType:(NSUInteger)arg0 identifier:(id)arg1 ;
-(id)shortDescription;
-(void)appendType:(NSUInteger)arg0 identifier:(id)arg1 ;


@end


#endif