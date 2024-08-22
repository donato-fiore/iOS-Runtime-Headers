// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPDEVICEKEYVALUESTORE_INTERNAL_H
#define RPDEVICEKEYVALUESTORE_INTERNAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RPDeviceKeyValueStore_Internal : NSObject {
    ? kvs;
}


@property (nonatomic, readonly) NSString *description;


-(id)getKeyValuePairsWithDomain:(id)arg0 ;
-(id)getValueWithDomain:(id)arg0 key:(id)arg1 ;
-(id)init;


@end


#endif