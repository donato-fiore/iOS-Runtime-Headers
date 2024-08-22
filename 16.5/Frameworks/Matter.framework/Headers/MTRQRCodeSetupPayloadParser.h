// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRQRCODESETUPPAYLOADPARSER_H
#define MTRQRCODESETUPPAYLOADPARSER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTRQRCodeSetupPayloadParser : NSObject {
    NSString *_base38Representation;
    *void _chipQRCodeSetupPayloadParser;
}




+(void)initialize;
-(id)initWithBase38Representation:(id)arg0 ;
-(id)populatePayload:(*id)arg0 ;
-(void)dealloc;


@end


#endif