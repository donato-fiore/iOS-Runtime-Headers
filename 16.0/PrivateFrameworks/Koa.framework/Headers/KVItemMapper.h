// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVITEMMAPPER_H
#define KVITEMMAPPER_H

@class KMItemMapper;

#import <Foundation/Foundation.h>


@interface KVItemMapper : NSObject {
    KMItemMapper *_mapper;
}




-(NSInteger)targetItemType;
-(id)init;
-(id)initWithObjectClass:(Class)arg0 error:(*id)arg1 ;
-(id)mapObject:(id)arg0 additionalFields:(id)arg1 error:(*id)arg2 ;
-(id)mapObject:(id)arg0 error:(*id)arg1 ;


@end


#endif