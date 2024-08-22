// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSLOTIDENTIFIER_H
#define WFSLOTIDENTIFIER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WFSlotIdentifier : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger arrayIndex; // ivar: _arrayIndex
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSString *parameterKey; // ivar: _parameterKey


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifierBySettingArrayIndex:(NSInteger)arg0 ;
-(id)identifierBySettingParameterKey:(id)arg0 ;
-(id)identifierBySettingParameterKey:(id)arg0 arrayIndex:(NSInteger)arg1 ;
-(id)initWithKey:(id)arg0 ;
-(id)initWithKey:(id)arg0 parameterKey:(id)arg1 arrayIndex:(NSInteger)arg2 ;


@end


#endif