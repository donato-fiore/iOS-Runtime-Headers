// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAINVITESUGGESTIONS_H
#define FAINVITESUGGESTIONS_H

@class _PSPredictionContext, NSString, NSArray;
@protocol FAInviteSuggesterProtocol;

#import <Foundation/Foundation.h>


@interface FAInviteSuggestions : NSObject <FAInviteSuggesterProtocol>



@property (retain, nonatomic) _PSPredictionContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *suggestions; // ivar: _suggestions
@property (readonly) Class superclass;


-(NSInteger)fetchSuggestedInviteTransportForContactId:(id)arg0 contactHandles:(id)arg1 ;
-(id)fetchFamilyMemberSuggestions;


@end


#endif