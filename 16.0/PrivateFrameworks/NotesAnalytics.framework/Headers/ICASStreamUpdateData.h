// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASSTREAMUPDATEDATA_H
#define ICASSTREAMUPDATEDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASStreamUpdateData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *hasUpdates; // ivar: _hasUpdates


+(id)dataName;
-(id)initWithHasUpdates:(id)arg0 ;
-(id)toDict;


@end


#endif