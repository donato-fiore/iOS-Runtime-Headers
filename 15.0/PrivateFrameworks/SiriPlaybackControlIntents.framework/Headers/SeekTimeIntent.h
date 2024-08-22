// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEEKTIMEINTENT_H
#define SEEKTIMEINTENT_H

@class INIntent, NSArray, NSNumber;



@interface SeekTimeIntent : INIntent

@property (nonatomic, copy) NSArray *deviceContext;
@property (nonatomic, copy) NSArray *deviceQueries;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, retain) NSNumber *isSkipToEnd;
@property (nonatomic) NSInteger mediaType;
@property (nonatomic, retain) NSNumber *playheadPosition;
@property (nonatomic, retain) NSNumber *shouldStartPlaybackAfterSeek;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif