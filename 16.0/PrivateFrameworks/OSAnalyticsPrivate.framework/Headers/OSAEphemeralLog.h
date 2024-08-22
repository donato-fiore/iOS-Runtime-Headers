// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSAEPHEMERALLOG_H
#define OSAEPHEMERALLOG_H

@class OSALog, NSData;



@interface OSAEphemeralLog : OSALog {
    NSData *_content;
}




-(id)initWithData:(id)arg0 andMetadata:(id)arg1 ;
-(void)retire:(char *)arg0 ;


@end


#endif