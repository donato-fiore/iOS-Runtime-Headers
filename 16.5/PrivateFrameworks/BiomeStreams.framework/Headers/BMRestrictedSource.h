// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMRESTRICTEDSOURCE_H
#define BMRESTRICTEDSOURCE_H



#import "BMSource.h"
#import "BMStoreSource.h"

@interface BMRestrictedSource : BMSource {
    BMStoreSource *_storeSource;
}




-(id)initWithStoreSource:(id)arg0 ;
-(void)sendEvent:(id)arg0 ;
-(void)sendEvent:(id)arg0 timestamp:(CGFloat)arg1 ;


@end


#endif