// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INVOICECOMMANDDEVICEINFORMATION_H
#define INVOICECOMMANDDEVICEINFORMATION_H

@class NSString, NSNumber;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INVoiceCommandDeviceInformation : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger deviceIdiom; // ivar: _deviceIdiom
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *isHomePodInUltimateMode; // ivar: _isHomePodInUltimateMode
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceIdiom:(NSInteger)arg0 isHomePodInUltimateMode:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif