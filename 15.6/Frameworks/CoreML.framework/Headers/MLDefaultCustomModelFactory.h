// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLDEFAULTCUSTOMMODELFACTORY_H
#define MLDEFAULTCUSTOMMODELFACTORY_H

@protocol MLCustomModelFactory;

#import <Foundation/Foundation.h>


@interface MLDefaultCustomModelFactory : NSObject <MLCustomModelFactory>





-(id)customModelWithName:(id)arg0 modelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(*id)arg3 ;


@end


#endif