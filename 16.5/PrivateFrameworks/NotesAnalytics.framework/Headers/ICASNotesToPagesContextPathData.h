// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASNOTESTOPAGESCONTEXTPATHDATA_H
#define ICASNOTESTOPAGESCONTEXTPATHDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASNotesToPagesContextPath.h"

@interface ICASNotesToPagesContextPathData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASNotesToPagesContextPath *notesToPagesContextPath; // ivar: _notesToPagesContextPath


+(id)dataName;
-(id)initWithNotesToPagesContextPath:(id)arg0 ;
-(id)toDict;


@end


#endif