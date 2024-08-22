// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSITEMPROVIDERTYPECOERCION_H
#define _NSITEMPROVIDERTYPECOERCION_H


#import <Foundation/Foundation.h>


@interface _NSItemProviderTypeCoercion : NSObject

@property (copy) Class targetClass; // ivar: _targetClass
@property (retain) id *value; // ivar: _value


+(id)typeCoercionForValue:(id)arg0 targetClass:(Class)arg1 ;
-(BOOL)shouldCoerceForCoding;
-(id)_NSItemProviderTypeCoercion_coercedNSDataValueFromNSURLValue:(id)arg0 error:(*id)arg1 ;
-(id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSDataValue:(id)arg0 error:(*id)arg1 ;
-(id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSURLValue:(id)arg0 error:(*id)arg1 ;
-(id)coerceValueError:(*id)arg0 ;
-(void)dealloc;


@end


#endif