// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSTRICLIENT_H
#define DDSTRICLIENT_H

@class TRIClient, NSString;
@protocol DDSTRIClient;

#import <Foundation/Foundation.h>


@interface DDSTRIClient : NSObject <DDSTRIClient>



@property (readonly) TRIClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)addUpdateHandlerForNamespaceName:(id)arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
-(id)experimentIdentifiersWithNamespaceName:(id)arg0 ;
-(id)initWithClient:(id)arg0 ;
-(id)levelForFactor:(id)arg0 withNamespaceName:(id)arg1 ;
-(void)refresh;
-(void)removeUpdateHandlerForToken:(id)arg0 ;


@end


#endif