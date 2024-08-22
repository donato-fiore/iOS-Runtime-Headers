// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9WIDGETKIT21ACTIVITYWIDGETREQUEST_H
#define _TTC9WIDGETKIT21ACTIVITYWIDGETREQUEST_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC9WidgetKit21ActivityWidgetRequest : NSObject <NSSecureCoding>

 {
    ? descriptor;
    ? defaultPayload;
    ? metrics;
    ? isStale;
    ? payloadID;
    ? fileHandle;
    ? environment;
    ? jindoEnvironment;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif