// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHATTRIBUTES_H
#define SEARCHATTRIBUTES_H

@class INObject, NSNumber;



@interface SearchAttributes : INObject

@property (nonatomic, retain) NSNumber *isDolbyAtmos;
@property (nonatomic, retain) NSNumber *isDolbyVision;
@property (nonatomic, retain) NSNumber *isFree;
@property (nonatomic, retain) NSNumber *isHdr;
@property (nonatomic, retain) NSNumber *isUhd;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif