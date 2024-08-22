// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRMANUALSETUPPAYLOADPARSER_H
#define MTRMANUALSETUPPAYLOADPARSER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTRManualSetupPayloadParser : NSObject {
    NSString *_decimalStringRepresentation;
    *void _chipManualSetupPayloadParser;
}




+(void)initialize;
-(id)initWithDecimalStringRepresentation:(id)arg0 ;
-(id)populatePayload:(*id)arg0 ;
-(void)dealloc;


@end


#endif