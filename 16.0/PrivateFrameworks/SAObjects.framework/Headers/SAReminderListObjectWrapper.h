// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAREMINDERLISTOBJECTWRAPPER_H
#define SAREMINDERLISTOBJECTWRAPPER_H

@class NSString, NSNumber, NSURL;
@protocol SASyncWrap;


#import "SAReminderListObject.h"

@interface SAReminderListObjectWrapper : SAReminderListObject <SASyncWrap>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *generation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *identifier;
@property (readonly) Class superclass;


+(id)listObjectWrapper;
+(id)listObjectWrapperWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif