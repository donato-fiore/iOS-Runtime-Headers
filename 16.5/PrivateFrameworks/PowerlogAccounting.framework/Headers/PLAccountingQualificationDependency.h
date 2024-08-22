// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLACCOUNTINGQUALIFICATIONDEPENDENCY_H
#define PLACCOUNTINGQUALIFICATIONDEPENDENCY_H



#import "PLAccountingDependency.h"
#import "PLAccountingQualificationEventEntry.h"

@interface PLAccountingQualificationDependency : PLAccountingDependency

@property (retain) PLAccountingQualificationEventEntry *qualificationEvent; // ivar: _qualificationEvent


-(id)ID;
-(id)activationDate;
-(id)initWithQualificationEvent:(id)arg0 ;
-(id)range;
-(void)setRange:(id)arg0 ;


@end


#endif