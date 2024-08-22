// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKTIMELINEENTRYMODEL_H
#define NTKTIMELINEENTRYMODEL_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface NTKTimelineEntryModel : NSObject

@property (retain, nonatomic) NSDate *entryDate; // ivar: _entryDate


-(id)entryForComplicationFamily:(NSInteger)arg0 ;
-(id)templateForComplicationFamily:(NSInteger)arg0 ;


@end


#endif