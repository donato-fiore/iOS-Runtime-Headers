// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUSGENERICRESULT_H
#define SAUSGENERICRESULT_H

@class NSArray, NSString, NSNumber;


#import "SADomainObject.h"
#import "SAUIAppPunchOut.h"
#import "SAUIImageResource.h"

@interface SAUSGenericResult : SADomainObject

@property (retain, nonatomic) SAUIAppPunchOut *actionButton;
@property (nonatomic) BOOL centered;
@property (copy, nonatomic) NSArray *descriptions;
@property (copy, nonatomic) NSString *footnote;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (retain, nonatomic) SAUIImageResource *thumbnail;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSNumber *titleMaxLines;


+(id)genericResult;
+(id)genericResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif