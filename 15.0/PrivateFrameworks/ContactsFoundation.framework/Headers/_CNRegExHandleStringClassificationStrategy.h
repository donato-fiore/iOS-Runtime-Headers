// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNREGEXHANDLESTRINGCLASSIFICATIONSTRATEGY_H
#define _CNREGEXHANDLESTRINGCLASSIFICATIONSTRATEGY_H

@class NSString;
@protocol _CNHandleStringClassificationStrategy;

#import <Foundation/Foundation.h>


@interface _CNRegExHandleStringClassificationStrategy : NSObject <_CNHandleStringClassificationStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)doesStringLookLikeEmailAddress:(id)arg0 ;
+(BOOL)doesStringLookLikePhoneNumber:(id)arg0 ;
-(NSUInteger)classificationOfHandleString:(id)arg0 ;


@end


#endif