// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SRUIFDATASTOREENTRY_H
#define _SRUIFDATASTOREENTRY_H


#import <Foundation/Foundation.h>


@interface _SRUIFDataStoreEntry : NSObject

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