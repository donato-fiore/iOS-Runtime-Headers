// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIMPLESYNDROMEHANDLER_H
#define SIMPLESYNDROMEHANDLER_H

@class NSMutableArray, NSString;
@protocol ConfigurableObjectProtocol, SyndromeHandlerProtocol;

#import <Foundation/Foundation.h>


@interface SimpleSyndromeHandler : NSObject <ConfigurableObjectProtocol>

 {
    CGFloat lastReportTime;
    id<SyndromeHandlerProtocol> *_nextStage;
    CGFloat _lastReportTime;
    NSMutableArray *_resetSources;
    unsigned int _dampeningInterval;
    unsigned int _dampeningStart;
    unsigned int _dampeningIncrement;
    unsigned int _dampeningMax;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *syndromeName; // ivar: _syndromeName
@property (nonatomic) char * syndromeUTF8Name; // ivar: _syndromeUTF8Name


+(id)configureClass:(id)arg0 ;
+(id)objectWithName:(id)arg0 ;
+(void)setDefaultNextStage:(id)arg0 ;
-(BOOL)_setName:(id)arg0 ;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)_reset:(id)arg0 ;
-(void)didReceiveSyndrome:(id)arg0 ;


@end


#endif