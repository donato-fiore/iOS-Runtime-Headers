// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFEXCHANGECONNECTION_H
#define MFEXCHANGECONNECTION_H



#import "MFIMAPConnection.h"

@interface MFExchangeConnection : MFIMAPConnection



-(BOOL)_isFetchResponseValid:(id)arg0 ;
-(id)_fetchArgumentForMessageSkeletonsWithAllHeaders;
-(id)_fetchArgumentForMessageUidsAndFlags;


@end


#endif