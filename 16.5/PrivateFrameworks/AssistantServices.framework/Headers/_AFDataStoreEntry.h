// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFDATASTOREENTRY_H
#define _AFDATASTOREENTRY_H


#import <Foundation/Foundation.h>


@interface _AFDataStoreEntry : NSObject

@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) id *value; // ivar: _value


-(NSInteger)_typeForPropertyListString:(id)arg0 ;
-(id)_propertyListStringForType;
-(id)_valueForPropertyListRepresentation:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithPropertyListRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)initWithType:(NSInteger)arg0 value:(id)arg1 ;
-(id)propertyListRepresentation;


@end


#endif