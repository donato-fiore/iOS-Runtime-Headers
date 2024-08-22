// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INFNUMBER_H
#define INFNUMBER_H

@class NSString, NSNumber;


#import "INFSentenceToken.h"

@interface INFNumber : INFSentenceToken {
    NSString *_identifier;
}


@property (copy, nonatomic) NSNumber *value; // ivar: _value


+(id)numberWithIdentifier:(id)arg0 ;
-(id)contributingSentenceContext;
-(id)dictionaryRepresentation;
-(id)identifier;
-(id)initWithIdentifier:(id)arg0 ;
-(id)stringForContext:(id)arg0 ;


@end


#endif