// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLOSEAPPINTENT_H
#define CLOSEAPPINTENT_H

@class INIntent;


#import "Application.h"

@interface CloseAppIntent : INIntent

@property (nonatomic) NSInteger appNoun;
@property (nonatomic) NSInteger appReference;
@property (nonatomic, retain) Application *application;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif