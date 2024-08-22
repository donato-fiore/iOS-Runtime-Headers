// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCOUNTHANDLEFORMATTER_H
#define HMDACCOUNTHANDLEFORMATTER_H

@class NSFormatter, NSString;
@protocol HMFPrivateDescriptionFormatter;



@interface HMDAccountHandleFormatter : NSFormatter <HMFPrivateDescriptionFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultFormatter;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(id)accountHandleFromString:(id)arg0 ;
-(id)privateStringForObjectValue:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif