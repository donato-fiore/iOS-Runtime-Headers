// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKLAYERPOOL_H
#define TSKLAYERPOOL_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSKLayerPool : NSObject {
    NSMutableArray *mLayerPool;
}


@property (nonatomic) Class layerClass; // ivar: mLayerClass
@property (nonatomic) id *layerDelegate; // ivar: mLayerDelegate


-(id)init;
-(id)requestLayerFromPool;
-(void)dealloc;
-(void)returnLayerToPool:(id)arg0 ;


@end


#endif