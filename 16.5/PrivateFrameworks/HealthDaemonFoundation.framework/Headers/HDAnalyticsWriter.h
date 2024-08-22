// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDANALYTICSWRITER_H
#define HDANALYTICSWRITER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HDAnalyticsWriter : NSObject {
    *__SecCertificate _certificate;
    NSString *_analyticsDirectory;
}




-(BOOL)submitJSONAnalyticsData:(id)arg0 bugType:(id)arg1 error:(*id)arg2 ;
-(BOOL)submitJSONAnalyticsData:(id)arg0 toDirectory:(id)arg1 withConfiguration:(id)arg2 error:(*id)arg3 ;
-(id)URLForAnalyticsFileWithName:(id)arg0 ;
-(id)analyticsFilePathsWithError:(*id)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;


@end


#endif