// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKJSENTITYVALUEPROVIDER_H
#define IKJSENTITYVALUEPROVIDER_H

@protocol IKJSEntityValueProvider, IKEntityValueProviding;


#import "IKJSObject.h"

@interface IKJSEntityValueProvider : IKJSObject <IKJSEntityValueProvider>



@property (retain, nonatomic) NSObject<IKEntityValueProviding> *entityValueProvider; // ivar: _entityValueProvider


-(id)_valueForEntityProperty:(id)arg0 ;
-(id)valueForEntityProperty:(id)arg0 ;
-(id)valuesForEntityProperties:(id)arg0 ;


@end


#endif