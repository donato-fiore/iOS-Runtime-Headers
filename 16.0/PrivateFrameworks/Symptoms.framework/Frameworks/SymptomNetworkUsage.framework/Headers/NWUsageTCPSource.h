// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWUSAGETCPSOURCE_H
#define NWUSAGETCPSOURCE_H

@class NSDictionary;


#import "NWUsageSource.h"

@interface NWUsageTCPSource : NWUsageSource {
    nstat_msg_src_update_tcp _nstatTCPUpdate;
    NSDictionary *_lookupResults;
}




-(BOOL)updateWithUpdate:(struct nstat_msg_src_update_convenient *)arg0 length:(NSInteger)arg1 monitor:(id)arg2 ;
-(id)createSnapshot:(int)arg0 firstOccurrence:(BOOL)arg1 ;
-(id)initWithUpdate:(struct nstat_msg_src_update_convenient *)arg0 length:(NSInteger)arg1 monitor:(id)arg2 ;
-(void)deriveAttribution:(id)arg0 ;
-(void)significantMetadataChange:(struct nstat_tcp_descriptor *)arg0 monitor:(id)arg1 ;


@end


#endif