// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKBUINESSCHATAPPLYCONTEXT_H
#define PKBUINESSCHATAPPLYCONTEXT_H

@class NSString;
@protocol PKBusinessChatContext;

#import <Foundation/Foundation.h>


@interface PKBuinessChatApplyContext : NSObject <PKBusinessChatContext>

 {
    NSString *_identifier;
    NSInteger _intent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)requiresAuthorization;
-(id)bodyText;
-(id)businessIdentifier;
-(id)groupParameters;
-(id)initWithIdentifier:(id)arg0 intent:(NSInteger)arg1 ;
-(id)intentParameters;


@end


#endif