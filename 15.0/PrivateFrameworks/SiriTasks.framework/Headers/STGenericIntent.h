// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STGENERICINTENT_H
#define STGENERICINTENT_H

@class NSString, NSMutableDictionary, AFSiriTask;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "STGenericIntentRequest.h"

@interface STGenericIntent : NSObject <NSSecureCoding>



@property (nonatomic) BOOL appInForeground; // ivar: _appInForeground
@property (copy, nonatomic) NSString *attributes; // ivar: _attributes
@property (nonatomic) BOOL finishedState; // ivar: _finishedState
@property (nonatomic) BOOL handled; // ivar: _handled
@property (retain, nonatomic) STGenericIntentRequest *intentRequest; // ivar: _intentRequest
@property (nonatomic) BOOL isLaunch; // ivar: _isLaunch
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableDictionary *parameters; // ivar: _parameters
@property (retain, nonatomic) AFSiriTask *siriTask; // ivar: _siriTask
@property (copy, nonatomic) NSString *utterance; // ivar: _utterance


+(BOOL)supportsSecureCoding;
-(id)getDateRangeParameter:(id)arg0 ;
-(id)getGroupParameter:(id)arg0 ;
-(id)getPersonParameter:(id)arg0 ;
-(id)getPlacesParameter:(id)arg0 ;
-(id)getTopicParameter:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)addParam:(id)arg0 withValue:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finished;
-(void)handleWithProgress:(NSInteger)arg0 ;


@end


#endif