// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASCONTEXTPATHDATA_H
#define ICASCONTEXTPATHDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASContextPath.h"

@interface ICASContextPathData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASContextPath *contextPath; // ivar: _contextPath


+(id)dataName;
-(id)initWithContextPath:(id)arg0 ;
-(id)toDict;


@end


#endif