// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AARAWDATAEVENT_H
#define AARAWDATAEVENT_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface AARawDataEvent : NSObject <AADataEventType>

 {
    ? name;
    ? dictionary;
}




+(id)dataName;
-(id)init;
-(id)initWithName:(id)arg0 dictionary:(id)arg1 ;
-(id)toDict;


@end


#endif