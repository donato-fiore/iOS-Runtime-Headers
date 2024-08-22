// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LMTRIALDATASOURCE_H
#define LMTRIALDATASOURCE_H

@class NSString, NSNotificationCenter;
@protocol LMTrialDataSource;

#import <Foundation/Foundation.h>


@interface LMTrialDataSource : NSObject <LMTrialDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;


-(struct optional<LM::TrialParameters> )loadParametersWithLocaleIdentifier:(*void)arg0 ;
-(void)startWithParametersUpdateCallback:(struct function<void (const std::string &, const std::optional<LM::TrialParameters> &)> )arg0 ;


@end


#endif