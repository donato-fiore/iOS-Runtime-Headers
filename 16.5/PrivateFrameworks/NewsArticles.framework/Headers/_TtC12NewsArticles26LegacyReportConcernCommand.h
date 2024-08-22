// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12NEWSARTICLES26LEGACYREPORTCONCERNCOMMAND_H
#define _TTC12NEWSARTICLES26LEGACYREPORTCONCERNCOMMAND_H

@class FCCommand;



@interface _TtC12NewsArticles26LegacyReportConcernCommand : FCCommand {
    ? concern;
    ? headline;
    ? comments;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 delegate:(id)arg1 qualityOfService:(NSInteger)arg2 ;


@end


#endif