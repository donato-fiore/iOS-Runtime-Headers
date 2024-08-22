// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC6KTRACE8REPORTER_H
#define _TTC6KTRACE8REPORTER_H

@class SwiftObject;
@protocol KTProviderLogger;



@interface _TtC6ktrace8Reporter : SwiftObject <KTProviderLogger>

 {
    ? output;
    ? errorOutput;
    ? creationDate;
    ? initialFormatter;
    ? updateFormatter;
    ? logger;
    ? options;
}




-(void)failWithReason:(id)arg0 ;
-(void)warnWithMessage:(id)arg0 ;


@end


#endif