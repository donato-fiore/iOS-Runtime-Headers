// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFPRIVATEOBJECTFORMATTER_H
#define HMFPRIVATEOBJECTFORMATTER_H

@class NSFormatter, NSString;
@protocol HMFPrivateDescriptionFormatter;



@interface HMFPrivateObjectFormatter : NSFormatter <HMFPrivateDescriptionFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultFormatter;
-(id)privateStringForObjectValue:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif