// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLICATIONMESSAGEGROUPDESCRIPTOR_H
#define PKAPPLICATIONMESSAGEGROUPDESCRIPTOR_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKApplicationMessageGroupDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *pluralSummary; // ivar: _pluralSummary
@property (readonly, nonatomic) NSString *singularSummary; // ivar: _singularSummary


+(BOOL)supportsSecureCoding;
+(id)createForIdentifier:(id)arg0 withSingularSummary:(id)arg1 pluralSummary:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif