// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKQUERY_H
#define PKQUERY_H


#import <Foundation/Foundation.h>

#import "PKRecognitionSessionManager.h"

@interface PKQuery : NSObject

@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (weak, nonatomic) PKRecognitionSessionManager *sessionManager; // ivar: _sessionManager


-(id)initWithRecognitionSessionManager:(id)arg0 ;
-(void)pause;
-(void)start;
-(void)teardown;


@end


#endif