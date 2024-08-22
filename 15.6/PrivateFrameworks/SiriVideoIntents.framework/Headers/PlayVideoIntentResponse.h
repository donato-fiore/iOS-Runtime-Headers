// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLAYVIDEOINTENTRESPONSE_H
#define PLAYVIDEOINTENTRESPONSE_H

@class INIntentResponse, NSString, NSNumber, NSURL;



@interface PlayVideoIntentResponse : INIntentResponse

@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic) NSInteger code; // ivar: code
@property (nonatomic, retain) NSNumber *isEntitled;
@property (nonatomic, copy) NSString *searchTerm;
@property (nonatomic, copy) NSURL *urlToLaunch;


-(id)init;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertiesByName:(id)arg0 ;


@end


#endif