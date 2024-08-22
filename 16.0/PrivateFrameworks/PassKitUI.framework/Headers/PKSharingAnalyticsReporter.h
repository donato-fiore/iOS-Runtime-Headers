// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHARINGANALYTICSREPORTER_H
#define PKSHARINGANALYTICSREPORTER_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface PKSharingAnalyticsReporter : NSObject {
    NSString *_subject;
    BOOL _isSessionOwned;
}


@property (readonly, nonatomic) NSData *sessionToken;


-(id)init;
-(id)initWithSubject:(id)arg0 sessionToken:(id)arg1 ;
-(void)dealloc;
-(void)sendEvent:(id)arg0 ;


@end


#endif