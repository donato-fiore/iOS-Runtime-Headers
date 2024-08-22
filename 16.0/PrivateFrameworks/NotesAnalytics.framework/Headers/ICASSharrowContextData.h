// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASSHARROWCONTEXTDATA_H
#define ICASSHARROWCONTEXTDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASSharrowContextData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *sharrowSelectedItem; // ivar: _sharrowSelectedItem


+(id)dataName;
-(id)initWithSharrowSelectedItem:(id)arg0 ;
-(id)toDict;


@end


#endif