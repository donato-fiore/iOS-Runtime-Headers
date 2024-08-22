// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCONTENTRESTRICTION_H
#define CCONTENTRESTRICTION_H

@class NSString, NSData;
@protocol RestrictionProtocol;

#import <Foundation/Foundation.h>

#import "fullPropSpec.h"

@interface cContentRestriction : NSObject <RestrictionProtocol>



@property unsigned int charCount; // ivar: _charCount
@property int genMethod; // ivar: _genMethod
@property unsigned int lcid; // ivar: _lcid
@property (retain) NSString *phraseStr; // ivar: _phraseStr
@property (retain) fullPropSpec *propSpec; // ivar: _propSpec
@property (retain) NSData *pwcsPhrase; // ivar: _pwcsPhrase
@property int restrictId; // ivar: restrictId
@property unsigned int ulType; // ivar: ulType
@property unsigned int weight; // ivar: weight


-(id)initWithMethod:(int)arg0 Weight:(unsigned int)arg1 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(int)restrictionNumber;
-(int)setPhrase:(id)arg0 ;
-(unsigned int)get_ultype;


@end


#endif