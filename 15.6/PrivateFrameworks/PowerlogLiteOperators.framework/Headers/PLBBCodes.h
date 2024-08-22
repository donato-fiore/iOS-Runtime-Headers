// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBBCODES_H
#define PLBBCODES_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PLBBCodes : NSObject

@property (retain) NSArray *Mav5_7_Lite_LogCodes; // ivar: _Mav5_7_Lite_LogCodes
@property (retain) NSArray *Mav5_7_LogCodes; // ivar: _Mav5_7_LogCodes
@property (retain) NSArray *Mav7_LogCodes; // ivar: _Mav7_LogCodes
@property (retain) NSArray *allMav_LogCodes; // ivar: _allMav_LogCodes


-(id)getEventCodesForMav:(id)arg0 AndType:(id)arg1 ;
-(id)getLogCodesForMav:(id)arg0 AndType:(id)arg1 ;
-(id)init;


@end


#endif