// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ECSUBJECTFORMATTER_H
#define ECSUBJECTFORMATTER_H

@class NSFormatter, NSString;
@protocol EFLoggable;


#import "_ECSubjectFormatterContext.h"

@interface ECSubjectFormatter : NSFormatter <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _ECSubjectFormatterContext *forwardContext; // ivar: _forwardContext
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _ECSubjectFormatterContext *replyContext; // ivar: _replyContext
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


+(id)_subjectStringForDisplayForObject:(id)arg0 style:(NSInteger)arg1 ;
+(id)localizedForwardPrefix;
+(id)localizedReplyPrefix;
+(id)log;
+(id)nonLocalizedForwardPrefix;
+(id)nonLocalizedReplyPrefix;
+(id)subjectStringForDisplayForMessage:(id)arg0 ;
+(id)subjectStringForDisplayForMessage:(id)arg0 style:(NSInteger)arg1 ;
+(id)subjectStringForDisplayForSubject:(id)arg0 ;
+(id)subjectStringForDisplayForSubject:(id)arg0 style:(NSInteger)arg1 ;
+(id)subjectStringForDisplayForSubjectString:(id)arg0 ;
+(id)subjectStringForDisplayForSubjectString:(id)arg0 style:(NSInteger)arg1 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(id)_localizedPrefixForSubjectFromSubject:(id)arg0 ;
-(id)init;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif