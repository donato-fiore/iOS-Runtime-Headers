// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXPTRANSLATIONOBJECT_H
#define AXPTRANSLATIONOBJECT_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXPTranslationObject : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *bridgeDelegateToken; // ivar: _bridgeDelegateToken
@property (nonatomic) BOOL didPopuldateAppInfo; // ivar: _didPopuldateAppInfo
@property (nonatomic) BOOL isApplicationElement; // ivar: _isApplicationElement
@property (nonatomic) NSUInteger objectID; // ivar: _objectID
@property (nonatomic) int pid; // ivar: _pid
@property (copy, nonatomic) NSData *rawElementData; // ivar: _rawElementData
@property (copy, nonatomic) NSString *remoteDebugDescription; // ivar: _remoteDebugDescription
@property (copy, nonatomic) id *remoteDescriptionBlock; // ivar: _remoteDescriptionBlock


+(BOOL)supportsSecureCoding;
+(id)allowedDecodableClasses;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif