// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVPOSTSTREAMTASK_H
#define CALDAVPOSTSTREAMTASK_H

@class CoreDAVPostTask, NSString;



@interface CalDAVPostStreamTask : CoreDAVPostTask

@property (retain, nonatomic) NSString *filename; // ivar: _filename
@property (retain, nonatomic) NSString *previousScheduleTag; // ivar: _previousScheduleTag


-(id)additionalHeaderValues;
-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)lossyAsciiFilename;
-(id)requestBody;
-(id)requestBodyStream;
-(id)responseData;
-(id)utf8PercentEscapedFilename;


@end


#endif