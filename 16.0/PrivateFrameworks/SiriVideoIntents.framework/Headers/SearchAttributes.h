// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHATTRIBUTES_H
#define SEARCHATTRIBUTES_H

@class INObject, NSNumber;



@interface SearchAttributes : INObject

@property (nonatomic, retain) NSNumber *isDolbyAtmos;
@property (nonatomic, retain) NSNumber *isDolbyVision;
@property (nonatomic, retain) NSNumber *isFree;
@property (nonatomic, retain) NSNumber *isHdr;
@property (nonatomic, retain) NSNumber *isUhd;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif