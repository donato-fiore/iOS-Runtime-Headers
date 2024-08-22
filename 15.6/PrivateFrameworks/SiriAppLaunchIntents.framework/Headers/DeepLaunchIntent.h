// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEEPLAUNCHINTENT_H
#define DEEPLAUNCHINTENT_H

@class INIntent, NSString;


#import "Application.h"

@interface DeepLaunchIntent : INIntent

@property (nonatomic, copy) NSString *pageName;
@property (nonatomic, retain) Application *requestedApplication;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif