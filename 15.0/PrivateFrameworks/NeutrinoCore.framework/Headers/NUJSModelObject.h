// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUJSMODELOBJECT_H
#define NUJSMODELOBJECT_H



#import "NUJSObject.h"
#import "NUModel.h"

@interface NUJSModelObject : NUJSObject

@property (readonly, nonatomic) NUModel *model; // ivar: _model


+(id)JSValueWithModel:(id)arg0 object:(id)arg1 context:(id)arg2 ;
-(BOOL)hasProperty:(id)arg0 ;
-(id)description;
-(id)initWithModel:(id)arg0 representedObject:(id)arg1 context:(id)arg2 ;
-(id)initWithRepresentedObject:(id)arg0 context:(id)arg1 ;
-(id)toObject;
-(id)valueForProperty:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(void)enumerateProperties:(id)arg0 ;
-(void)reset;


@end


#endif