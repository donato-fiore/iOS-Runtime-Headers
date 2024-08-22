// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICPROACTIVETRIGGER_H
#define _ICPROACTIVETRIGGER_H

@class NSDictionary, NSSet, NSString, TIInputContextHistory;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _ICProactiveTrigger : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDictionary *attributedString; // ivar: _attributedString
@property (retain, nonatomic) NSSet *availableApps; // ivar: _availableApps
@property (readonly, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic) TIInputContextHistory *inputContextHistory; // ivar: _inputContextHistory
@property (readonly, nonatomic) unsigned char triggerSourceType; // ivar: _triggerSourceType


+(BOOL)isEquivalentDictionary:(id)arg0 second:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToProactiveTrigger:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(id)arg0 inputContextHistory:(id)arg1 contentType:(id)arg2 ;
-(id)initWithSource:(unsigned char)arg0 attributes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif