// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCELLULAROUTRANKISSUE_H
#define WFCELLULAROUTRANKISSUE_H

@class NSString;


#import "WFHealthIssue.h"

@interface WFCellularOutrankIssue : WFHealthIssue {
    BOOL _subtitleOnlyIssue;
    NSString *_issueShortTitle;
    NSString *_typeString;
    NSString *_issueTitle;
}




+(id)cellularOutrankDownload;
+(id)cellularOutrankPerformance;
+(id)cellularOutrankSecurity;
-(BOOL)subtitleOnlyIssue;
-(id)_cellularOutrankSubTypeToString:(NSUInteger)arg0 ;
-(id)_titleForSubType:(NSUInteger)arg0 ;
-(id)initWithSubType:(NSUInteger)arg0 ;
-(id)issueShortTitle;
-(id)issueTitle;
-(id)typeString;


@end


#endif