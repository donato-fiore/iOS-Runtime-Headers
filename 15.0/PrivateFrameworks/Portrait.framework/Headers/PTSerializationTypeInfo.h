// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTSERIALIZATIONTYPEINFO_H
#define PTSERIALIZATIONTYPEINFO_H


#import <Foundation/Foundation.h>


@interface PTSerializationTypeInfo : NSObject

@property BOOL isAtomContainerType; // ivar: _isAtomContainerType
@property BOOL isProviderArrayType; // ivar: _isProviderArrayType
@property (retain) Class providerClass; // ivar: _providerClass
@property unsigned int type; // ivar: _type


-(id)initWithType:(unsigned int)arg0 providerClass:(Class)arg1 ;


@end


#endif