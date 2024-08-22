// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPASSWORDWARNING_H
#define WBSPASSWORDWARNING_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "WBSPasswordEvaluation.h"
#import "WBSSavedAccount.h"

@interface WBSPasswordWarning : NSObject {
    WBSPasswordEvaluation *_weakPasswordEvaluation;
    NSArray *_domainsWithReusedPassword;
}


@property (readonly, nonatomic) BOOL hasBeenHidden;
@property (readonly, nonatomic) NSUInteger hashForUserAcknowlegement;
@property (readonly, nonatomic) NSUInteger issueTypes; // ivar: _issueTypes
@property (readonly, nonatomic) NSString *localizedInformationTextForWarningWhenLoggingIn;
@property (readonly, nonatomic) NSString *localizedShortDescriptionOfProblemType;
@property (readonly, nonatomic) NSString *localizedShortDescriptivePhrase;
@property (readonly, nonatomic) WBSSavedAccount *savedAccount; // ivar: _savedAccount
@property (readonly, nonatomic) NSUInteger severity;
@property (nonatomic) NSUInteger severityScore; // ivar: _severityScore
@property (readonly, nonatomic) BOOL shouldShowWarningsWhenLoggingIn;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)_passwordVisibilityForClient:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)_localizedLongWarningStringsForClient:(NSUInteger)arg0 ;
-(id)_localizedShortDescriptionWithFullDescriptivePhrase:(BOOL)arg0 ;
-(id)initWithSavedAccount:(id)arg0 issueTypes:(NSUInteger)arg1 weakPasswordEvaluation:(id)arg2 domainsWithReusedPassword:(id)arg3 ;
-(id)localizedLongDescriptionForClient:(NSUInteger)arg0 ;


@end


#endif