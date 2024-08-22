// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATPROPERTY_H
#define CATPROPERTY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CATProperty : NSObject

@property (readonly, nonatomic) NSInteger association; // ivar: _association
@property (readonly, nonatomic) SEL customGetterSelector; // ivar: _customGetterSelector
@property (readonly, nonatomic) SEL customSetterSelector; // ivar: _customSetterSelector
@property (readonly, copy, nonatomic) NSString *instanceVariableName; // ivar: _instanceVariableName
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isNonAtomic) BOOL nonAtomic; // ivar: _nonAtomic
@property (readonly, nonatomic) Class objectClass; // ivar: _objectClass
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly; // ivar: _readOnly
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic, getter=isWeakReference) BOOL weakReference; // ivar: _weakReference


+(id)propertiesForClass:(Class)arg0 ;
+(id)propertiesForProtocol:(id)arg0 ;
+(void)initialize;
-(id)init;
-(id)initWithName:(char *)arg0 attributes:(char *)arg1 ;


@end


#endif