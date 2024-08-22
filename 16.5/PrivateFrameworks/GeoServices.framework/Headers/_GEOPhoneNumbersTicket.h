// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOPHONENUMBERSTICKET_H
#define _GEOPHONENUMBERSTICKET_H

@class NSArray;


#import "GEOAbstractMapServiceTicket.h"

@interface _GEOPhoneNumbersTicket : GEOAbstractMapServiceTicket {
    NSArray *_phoneNumbers;
    BOOL _allowCellularDataForLookup;
}




-(id)description;
-(id)initWithPhoneNumbers:(id)arg0 allowCellularDataForLookup:(BOOL)arg1 traits:(id)arg2 ;
-(struct ? )dataRequestKind;
// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 timeout:(id)arg2 networkActivity:(NSInteger)arg3  ;


@end


#endif