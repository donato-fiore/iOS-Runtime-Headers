// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASWINDOWSCENEDATA_H
#define ICASWINDOWSCENEDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASWindowSceneData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *windowSceneID; // ivar: _windowSceneID


+(id)dataName;
-(id)initWithWindowSceneID:(id)arg0 ;
-(id)toDict;


@end


#endif