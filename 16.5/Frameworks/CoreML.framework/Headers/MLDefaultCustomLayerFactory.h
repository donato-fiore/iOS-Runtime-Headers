// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLDEFAULTCUSTOMLAYERFACTORY_H
#define MLDEFAULTCUSTOMLAYERFACTORY_H

@protocol MLCustomLayerFactory;

#import <Foundation/Foundation.h>


@interface MLDefaultCustomLayerFactory : NSObject <MLCustomLayerFactory>





-(id)createCustomLayer:(id)arg0 withParameters:(id)arg1 error:(*id)arg2 ;


@end


#endif