// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKUIRESOURCEPROVIDER_H
#define CLKUIRESOURCEPROVIDER_H

@class NSNumber, NSSet;
@protocol CLKUIResourceProviderDelegate;

#import <Foundation/Foundation.h>


@interface CLKUIResourceProvider : NSObject

@property (readonly, weak, nonatomic) NSObject<CLKUIResourceProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSNumber *key; // ivar: _key
@property (readonly, nonatomic) NSSet *uuidHistory; // ivar: _uuidHistory


-(id)initWithDelegate:(id)arg0 key:(id)arg1 ;
-(void)addUuidToHistory:(id)arg0 ;


@end


#endif