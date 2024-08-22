// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPDATEANDREPORTSERVICES_H
#define UPDATEANDREPORTSERVICES_H


#import <Foundation/Foundation.h>


@interface UpdateAndReportServices : NSObject

@property (copy) id *block; // ivar: _block
@property (readonly) BOOL report; // ivar: _report
@property (readonly) BOOL update; // ivar: _update


-(id)initWithServices:(BOOL)arg0 needToReport:(BOOL)arg1 service:(id)arg2 ;
-(void)dealloc;


@end


#endif