// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORIESTOREADSET_H
#define HFACCESSORIESTOREADSET_H

@class NSMutableDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface HFAccessoriesToReadSet : NSObject

@property (retain, nonatomic) NSMutableDictionary *accessories; // ivar: _accessories
@property (retain, nonatomic) NSNumber *transportKey; // ivar: _transportKey


-(NSInteger)count;
-(id)initWithTransportType:(id)arg0 ;
-(void)addCharacteristic:(id)arg0 ;
-(void)markCharacteristicAsRead:(id)arg0 withLogger:(id)arg1 ;


@end


#endif