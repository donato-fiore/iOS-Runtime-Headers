// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTSUGGESTIONVIEWCONTROLLERSGORIGINDATASOURCE_H
#define CNCONTACTSUGGESTIONVIEWCONTROLLERSGORIGINDATASOURCE_H

@class NSString, NSAttributedString, SGOrigin, NSURL;
@protocol CNContactSuggestionViewControllerDataSource;

#import <Foundation/Foundation.h>


@interface CNContactSuggestionViewControllerSGOriginDataSource : NSObject <CNContactSuggestionViewControllerDataSource>



@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSString *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSAttributedString *formattedSnippet;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SGOrigin *origin; // ivar: _origin
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSUInteger type;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *with;


+(id)contactSuggestionTypeBySuggestionType;
-(id)contactNameFromPerson:(id)arg0 ;
-(id)initWithSGOrigin:(id)arg0 ;


@end


#endif