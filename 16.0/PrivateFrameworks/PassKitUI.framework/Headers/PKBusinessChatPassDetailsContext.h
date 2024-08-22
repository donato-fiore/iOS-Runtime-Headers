// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKBUSINESSCHATPASSDETAILSCONTEXT_H
#define PKBUSINESSCHATPASSDETAILSCONTEXT_H

@class PKPass, NSString;
@protocol PKBusinessChatContext;

#import <Foundation/Foundation.h>


@interface PKBusinessChatPassDetailsContext : NSObject <PKBusinessChatContext>

 {
    PKPass *_pass;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)requiresAuthorization;
-(id)businessIdentifier;
-(id)groupParameters;
-(id)initWithPass:(id)arg0 ;
-(id)intentParameters;


@end


#endif