// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAOOFPARAMS_H
#define DAOOFPARAMS_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface DAOofParams : NSObject

@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (retain, nonatomic) NSString *externalMessage; // ivar: _externalMessage
@property (nonatomic) int externalState; // ivar: _externalState
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) int oofState; // ivar: _oofState
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime


-(BOOL)isEnabled;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationForASSettingTask;
-(id)initWithDictionary:(id)arg0 ;
-(void)enableOof:(BOOL)arg0 From:(id)arg1 to:(id)arg2 withMessage:(id)arg3 ;


@end


#endif