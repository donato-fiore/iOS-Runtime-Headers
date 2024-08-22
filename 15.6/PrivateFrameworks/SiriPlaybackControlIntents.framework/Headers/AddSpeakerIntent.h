// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADDSPEAKERINTENT_H
#define ADDSPEAKERINTENT_H

@class INIntent, NSArray;


#import "MediaStream.h"

@interface AddSpeakerIntent : INIntent

@property (nonatomic, copy) NSArray *destinations;
@property (nonatomic, copy) NSArray *deviceContext;
@property (nonatomic, copy) NSArray *deviceQueries;
@property (nonatomic) NSInteger mediaType;
@property (nonatomic, retain) MediaStream *source;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif