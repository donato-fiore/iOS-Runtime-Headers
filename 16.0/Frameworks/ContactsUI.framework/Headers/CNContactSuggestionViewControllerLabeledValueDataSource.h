// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTSUGGESTIONVIEWCONTROLLERLABELEDVALUEDATASOURCE_H
#define CNCONTACTSUGGESTIONVIEWCONTROLLERLABELEDVALUEDATASOURCE_H

@class NSString, NSAttributedString, CNLabeledValue, NSURL;
@protocol CNContactSuggestionViewControllerDataSource;

#import <Foundation/Foundation.h>


@interface CNContactSuggestionViewControllerLabeledValueDataSource : NSObject <CNContactSuggestionViewControllerDataSource>



@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSString *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSAttributedString *formattedSnippet;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNLabeledValue *labeledValue; // ivar: _labeledValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSUInteger type;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *with;


-(id)initWithLabeledValue:(id)arg0 ;


@end


#endif