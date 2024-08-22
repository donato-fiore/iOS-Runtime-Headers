// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLINTERACTIONHANDLER_H
#define SLINTERACTIONHANDLER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SLInteractionHandler : NSObject

@property (retain, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier


-(id)fetchAttributionForAttributionIdentifier:(id)arg0 ;
-(id)fetchInteractionsWithLimit:(NSUInteger)arg0 variant:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithAppIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)feedbackForHighlightIdentifier:(id)arg0 withType:(NSUInteger)arg1 variant:(id)arg2 completionBlock:(id)arg3 ;


@end


#endif