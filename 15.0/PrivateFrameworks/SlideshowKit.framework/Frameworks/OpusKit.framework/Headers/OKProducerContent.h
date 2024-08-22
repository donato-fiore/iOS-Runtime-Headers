// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKPRODUCERCONTENT_H
#define OKPRODUCERCONTENT_H



#import "OKProducerBundle.h"
#import "OKProducerPlugin.h"

@interface OKProducerContent : OKProducerBundle

@property (nonatomic) OKProducerPlugin *plugin; // ivar: _plugin


-(BOOL)isLoaded;
-(id)initWithURL:(id)arg0 ;
-(void)dealloc;


@end


#endif