// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HLPANALYTICSEVENTCONTROLLER_H
#define HLPANALYTICSEVENTCONTROLLER_H

@class NSMutableDictionary, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface HLPAnalyticsEventController : NSObject

@property (retain, nonatomic) NSMutableDictionary *countersByKey; // ivar: _countersByKey
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDictionary *requiredKeys; // ivar: _requiredKeys
@property (retain, nonatomic) NSString *version; // ivar: _version


+(id)sharedInstance;
-(id)counterForKey:(id)arg0 ;
-(void)configureWithHelpBookID:(id)arg0 version:(id)arg1 ;
-(void)incrementCounterForKey:(id)arg0 ;
-(void)logAnalyticsEvent:(id)arg0 ;


@end


#endif