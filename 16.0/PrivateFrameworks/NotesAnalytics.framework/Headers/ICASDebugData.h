// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASDEBUGDATA_H
#define ICASDEBUGDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASDebugData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)dataName;
-(id)initWithName:(id)arg0 ;
-(id)toDict;


@end


#endif