// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRREPORTMANAGER_H
#define BRREPORTMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BRRTCPairingReportManager.h"

@interface BRReportManager : NSObject

@property (nonatomic) unsigned short category; // ivar: _category
@property (copy, nonatomic) NSString *configuration; // ivar: _configuration
@property (weak, nonatomic) BRRTCPairingReportManager *pairingReportManager; // ivar: _pairingReportManager
@property (nonatomic) BOOL pairingReportUnderway; // ivar: _pairingReportUnderway


+(id)reporterWithCatergory:(unsigned short)arg0 ;
-(id)categortyToConfiguration:(unsigned short)arg0 ;
-(id)initWithCategory:(unsigned short)arg0 ;
-(void)reportRTCMetric:(id)arg0 ;


@end


#endif