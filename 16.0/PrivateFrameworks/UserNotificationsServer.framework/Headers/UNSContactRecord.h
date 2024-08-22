// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSCONTACTRECORD_H
#define UNSCONTACTRECORD_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UNSContactRecord : NSObject <NSCopying>



@property (copy, nonatomic) NSString *cnContactFullname; // ivar: _cnContactFullname
@property (copy, nonatomic) NSString *cnContactIdentifier; // ivar: _cnContactIdentifier
@property (nonatomic, getter=isCNContactIdentifierSuggested) BOOL cnContactIdentifierSuggested; // ivar: _cnContactIdentifierSuggested
@property (copy, nonatomic) NSString *customIdentifier; // ivar: _customIdentifier
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic, getter=isDisplayNameSuggested) BOOL displayNameSuggested; // ivar: _displayNameSuggested
@property (copy, nonatomic) NSString *handle; // ivar: _handle
@property (nonatomic) NSInteger handleType; // ivar: _handleType
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif