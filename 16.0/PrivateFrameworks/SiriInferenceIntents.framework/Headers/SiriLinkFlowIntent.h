// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRILINKFLOWINTENT_H
#define SIRILINKFLOWINTENT_H

@class INIntent, NSString;



@interface SiriLinkFlowIntent : INIntent

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *bundleIdentifier;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif