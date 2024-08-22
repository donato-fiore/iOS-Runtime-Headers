// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBMODELQUERYARGUMENT_H
#define HMBMODELQUERYARGUMENT_H

@class HMFObject, NSString;
@protocol HMBQueryableModelFieldCoder;



@interface HMBModelQueryArgument : HMFObject

@property (readonly, nonatomic) NSObject<HMBQueryableModelFieldCoder> *defaultValue; // ivar: _defaultValue
@property (readonly, nonatomic) NSString *propertyName; // ivar: _propertyName


+(id)argumentWithPropertyName:(id)arg0 ;
+(id)argumentWithPropertyName:(id)arg0 defaultValue:(id)arg1 ;
-(id)initWithPropertyName:(id)arg0 defaultValue:(id)arg1 ;


@end


#endif