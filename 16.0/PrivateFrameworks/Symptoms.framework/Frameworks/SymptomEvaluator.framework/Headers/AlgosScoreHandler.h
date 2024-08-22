// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ALGOSSCOREHANDLER_H
#define ALGOSSCOREHANDLER_H

@class NSNotificationCenter, NSString;
@protocol ConfigurableObjectProtocol, SymptomAdditionalProtocol;

#import <Foundation/Foundation.h>


@interface AlgosScoreHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol>

 {
    BOOL active;
    NSNotificationCenter *notificationCenter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)noteSymptom:(id)arg0 ;
-(id)init;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)processEventFor:(id)arg0 withScore:(CGFloat)arg1 ;


@end


#endif