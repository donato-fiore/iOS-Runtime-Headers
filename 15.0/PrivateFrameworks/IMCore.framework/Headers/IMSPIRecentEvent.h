// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMSPIRECENTEVENT_H
#define IMSPIRECENTEVENT_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface IMSPIRecentEvent : NSObject

@property (retain) NSDate *date; // ivar: _date
@property (retain) NSString *handle; // ivar: _handle
@property (retain) NSString *labelID; // ivar: _labelID


-(id)description;
-(id)initWithHandle:(id)arg0 date:(id)arg1 ;
-(id)initWithLabelID:(id)arg0 date:(id)arg1 ;


@end


#endif