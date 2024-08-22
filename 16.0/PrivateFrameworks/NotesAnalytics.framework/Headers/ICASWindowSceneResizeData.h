// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASWINDOWSCENERESIZEDATA_H
#define ICASWINDOWSCENERESIZEDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASWindowSceneResizeData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *usesMultiWindow; // ivar: _usesMultiWindow


+(id)dataName;
-(id)initWithUsesMultiWindow:(id)arg0 ;
-(id)toDict;


@end


#endif