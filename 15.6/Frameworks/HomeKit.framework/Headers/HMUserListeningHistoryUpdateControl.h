// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMUSERLISTENINGHISTORYUPDATECONTROL_H
#define HMUSERLISTENINGHISTORYUPDATECONTROL_H

@class NSMutableSet, NSArray;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HMUserListeningHistoryUpdateControl : NSObject <NSCopying, NSMutableCopying>

 {
    NSMutableSet *_internalAccessories;
}


@property (readonly, copy) NSArray *accessories;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessories:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif