// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FFFEATURESTATE_H
#define FFFEATURESTATE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface FFFeatureState : NSObject

@property (retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (retain, nonatomic) NSString *disclosurerequired; // ivar: _disclosurerequired
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSString *feature; // ivar: _feature
@property (nonatomic) NSInteger value; // ivar: _value


-(id)description;
-(id)initWithDomain:(id)arg0 feature:(id)arg1 value:(NSInteger)arg2 ;
-(id)initWithDomain:(id)arg0 feature:(id)arg1 value:(NSInteger)arg2 disclosureRequired:(id)arg3 attributes:(id)arg4 ;


@end


#endif