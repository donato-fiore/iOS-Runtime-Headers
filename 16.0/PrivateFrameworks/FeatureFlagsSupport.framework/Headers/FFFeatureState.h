// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FFFEATURESTATE_H
#define FFFEATURESTATE_H

@class NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FFFeatureState : NSObject <NSCopying>



@property (retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (retain, nonatomic) NSString *disclosurerequired; // ivar: _disclosurerequired
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSString *feature; // ivar: _feature
@property (retain, nonatomic) NSString *phase; // ivar: _phase
@property (nonatomic) NSInteger value; // ivar: _value


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDomain:(id)arg0 feature:(id)arg1 value:(NSInteger)arg2 ;
-(id)initWithDomain:(id)arg0 feature:(id)arg1 value:(NSInteger)arg2 phase:(id)arg3 disclosureRequired:(id)arg4 attributes:(id)arg5 ;


@end


#endif