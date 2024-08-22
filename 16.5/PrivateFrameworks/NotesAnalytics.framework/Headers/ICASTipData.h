// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASTIPDATA_H
#define ICASTIPDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASTipData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *tipFeature; // ivar: _tipFeature


+(id)dataName;
-(id)initWithTipFeature:(id)arg0 ;
-(id)toDict;


@end


#endif