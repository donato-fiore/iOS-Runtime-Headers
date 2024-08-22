// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVOICETRIGGERRTMODEL_H
#define CSVOICETRIGGERRTMODEL_H

@class NSData, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerRTModel : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSData *certificate; // ivar: _certificate
@property (readonly, nonatomic) NSData *digest; // ivar: _digest
@property (readonly, nonatomic) NSData *modelData; // ivar: _modelData
@property (readonly, nonatomic) NSString *modelHash; // ivar: _modelHash
@property (readonly, nonatomic) NSString *modelLocale; // ivar: _modelLocale
@property (readonly, nonatomic) NSData *signature; // ivar: _signature


+(BOOL)supportsSecureCoding;
-(id)builtInRTModelDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 hash:(id)arg1 locale:(id)arg2 ;
-(id)initWithData:(id)arg0 hash:(id)arg1 locale:(id)arg2 digest:(id)arg3 signature:(id)arg4 certificate:(id)arg5 ;
-(id)initWithHash:(id)arg0 locale:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif