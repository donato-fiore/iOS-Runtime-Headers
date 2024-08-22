// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKSMARTCARDATRINTERFACEGROUP_H
#define TKSMARTCARDATRINTERFACEGROUP_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface TKSmartCardATRInterfaceGroup : NSObject {
    NSNumber" _ABC;
}


@property (readonly, nonatomic) NSNumber *TA;
@property (readonly, nonatomic) NSNumber *TB;
@property (readonly, nonatomic) NSNumber *TC;
@property (readonly, nonatomic) NSNumber *protocol; // ivar: _protocol


-(id)description;
-(id)initWithProtocol:(id)arg0 ;
// -(id)parseWithY:(char *)arg0 toProtocol:(*id)arg1 fromSource:(id)arg2 hasNext:(unk)arg3  ;


@end


#endif