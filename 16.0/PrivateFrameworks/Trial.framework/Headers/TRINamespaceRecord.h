// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRINAMESPACERECORD_H
#define TRINAMESPACERECORD_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRINamespaceRecord : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) unsigned int compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSURL *treatmentURL; // ivar: _treatmentURL


+(BOOL)supportsSecureCoding;
+(id)recordWithName:(id)arg0 compatibilityVersion:(unsigned int)arg1 treatmentURL:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementCompatibilityVersion:(unsigned int)arg0 ;
-(id)copyWithReplacementName:(id)arg0 ;
-(id)copyWithReplacementTreatmentURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 compatibilityVersion:(unsigned int)arg1 treatmentURL:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif