// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTOSLOGLOADERFETCHTICKET_H
#define DTOSLOGLOADERFETCHTICKET_H

@class OSLogEventStreamPosition;


#import "DTOSLogLoaderTicket.h"

@interface DTOSLogLoaderFetchTicket : DTOSLogLoaderTicket

@property (retain, nonatomic) OSLogEventStreamPosition *currentPosition; // ivar: _currentPosition
@property (nonatomic) CGFloat windowInSeconds; // ivar: _windowInSeconds


-(void)holdAgent:(id)arg0 loader:(id)arg1 ;
-(void)prepareAgent:(id)arg0 loader:(id)arg1 ;


@end


#endif