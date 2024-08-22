// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SETSUBTITLESTATEINTENT_H
#define SETSUBTITLESTATEINTENT_H

@class INIntent, NSArray;


#import "Device.h"
#import "LanguageOption.h"

@interface SetSubtitleStateIntent : INIntent

@property (nonatomic, retain) Device *device;
@property (nonatomic, copy) NSArray *deviceContext;
@property (nonatomic, copy) NSArray *deviceQueries;
@property (nonatomic) NSInteger enable;
@property (nonatomic, retain) LanguageOption *language;
@property (nonatomic) NSInteger type;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif