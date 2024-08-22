// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDCUSTOMPROPERTY_H
#define ASDCUSTOMPROPERTY_H


#import <Foundation/Foundation.h>

#import "ASDPropertyAddress.h"
#import "ASDObject.h"

@interface ASDCustomProperty : NSObject

@property (readonly, copy, nonatomic) ASDPropertyAddress *address; // ivar: _address
@property (readonly, nonatomic) unsigned int element;
@property (weak, nonatomic) ASDObject *owner; // ivar: _owner
@property (readonly, nonatomic) unsigned int propertyDataType; // ivar: _propertyDataType
@property (readonly, nonatomic) unsigned int qualifierDataType; // ivar: _qualifierDataType
@property (readonly, nonatomic) unsigned int scope;
@property (readonly, nonatomic) unsigned int selector;
@property (nonatomic, getter=isSettable) BOOL settable; // ivar: _settable
@property (readonly, nonatomic) id *value;


-(BOOL)getPropertyWithQualifierSize:(unsigned int)arg0 qualifierData:(*void)arg1 dataSize:(*unsigned int)arg2 andData:(*void)arg3 forClient:(int)arg4 ;
-(BOOL)setPropertyWithQualifierSize:(unsigned int)arg0 qualifierData:(*void)arg1 dataSize:(unsigned int)arg2 andData:(*void)arg3 forClient:(int)arg4 ;
-(id)init;
-(id)initWithAddress:(id)arg0 propertyDataType:(unsigned int)arg1 qualifierDataType:(unsigned int)arg2 ;
-(id)initWithSelector:(unsigned int)arg0 propertyDataType:(unsigned int)arg1 andQualifierDataType:(unsigned int)arg2 ;
-(id)initWithSelector:(unsigned int)arg0 scope:(unsigned int)arg1 element:(unsigned int)arg2 propertyDataType:(unsigned int)arg3 andQualifierDataType:(unsigned int)arg4 ;
-(unsigned int)dataSizeWithQualifierSize:(unsigned int)arg0 andQualifierData:(*void)arg1 ;
-(void)sendPropertyChangeNotification;


@end


#endif