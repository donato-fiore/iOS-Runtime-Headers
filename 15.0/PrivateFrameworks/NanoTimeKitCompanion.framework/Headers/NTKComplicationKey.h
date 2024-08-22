// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCOMPLICATIONKEY_H
#define NTKCOMPLICATIONKEY_H

@class NSString, CLKComplicationDescriptor;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NTKComplicationKey : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (copy, nonatomic) NSString *complicationIdentifier; // ivar: _complicationIdentifier
@property (copy, nonatomic) CLKComplicationDescriptor *descriptor; // ivar: _descriptor


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithClientIdentifier:(id)arg0 complicationIdentifier:(id)arg1 ;
-(id)initWithClientIdentifier:(id)arg0 descriptor:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif