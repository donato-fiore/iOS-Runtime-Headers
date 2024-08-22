// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDEBUGISSUEREPORTFORMATTER_H
#define _UIDEBUGISSUEREPORTFORMATTER_H

@class UIDebugReportFormatter, NSString;



@interface _UIDebugIssueReportFormatter : UIDebugReportFormatter

@property (copy, nonatomic) NSString *defaultIssuePrefix; // ivar: _defaultIssuePrefix
@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (copy, nonatomic) NSString *header; // ivar: _header
@property (copy, nonatomic) NSString *noIssuesDescription; // ivar: _noIssuesDescription


-(id)_componentsFromReport:(id)arg0 ;
-(id)init;
-(id)stringFromReport:(id)arg0 ;


@end


#endif