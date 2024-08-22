// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LMTRIAL_H
#define LMTRIAL_H

@protocol LMTrialDataSource;

#import <Foundation/Foundation.h>


@interface LMTrial : NSObject {
    map<std::string, std::optional<LM::TrialParameters>, std::less<std::string>, std::allocator<std::pair<const std::string, std::optional<LM::TrialParameters>>>> trialParametersByLocaleIdentifier;
}


@property (readonly) NSObject<LMTrialDataSource> *dataSource; // ivar: _dataSource


+(id)encodeTrialParameters:(struct optional<LM::TrialParameters> )arg0 ;
+(id)sharedInstance;
-(id)encodedTrialParametersForLocale:(id)arg0 ;
-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(void)handleUpdatedTrialParameters:(struct optional<LM::TrialParameters> )arg0 forLocaleIdentifier:(*void)arg1 ;
-(void)start;


@end


#endif