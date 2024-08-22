// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMLPLANDESCRIPTOR_H
#define PMLPLANDESCRIPTOR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PMLPlanDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *version; // ivar: _version


+(BOOL)isValidPlanId:(id)arg0 ;
+(id)descriptorFromPlanId:(id)arg0 ;
+(id)planIdFromString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 version:(id)arg1 locale:(id)arg2 ;


@end


#endif