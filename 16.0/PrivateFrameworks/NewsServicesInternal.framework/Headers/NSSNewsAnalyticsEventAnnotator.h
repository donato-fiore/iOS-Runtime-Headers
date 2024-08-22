// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSNEWSANALYTICSEVENTANNOTATOR_H
#define NSSNEWSANALYTICSEVENTANNOTATOR_H

@protocol NSSNewsAnalyticsSessionManager, NSSNewsAnalyticsUserIDProvider;

#import <Foundation/Foundation.h>


@interface NSSNewsAnalyticsEventAnnotator : NSObject

@property (readonly, weak, nonatomic) NSObject<NSSNewsAnalyticsSessionManager> *sessionManager; // ivar: _sessionManager
@property (readonly, nonatomic) NSObject<NSSNewsAnalyticsUserIDProvider> *userIDProvider; // ivar: _userIDProvider


-(id)init;
-(id)initWithSessionManager:(id)arg0 userIDProvider:(id)arg1 ;
-(void)annotateEvent:(id)arg0 withOptions:(NSUInteger)arg1 ;


@end


#endif