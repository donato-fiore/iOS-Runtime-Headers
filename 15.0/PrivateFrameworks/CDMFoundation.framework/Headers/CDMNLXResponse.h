// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMNLXRESPONSE_H
#define CDMNLXRESPONSE_H

@class SIRINLUResponse, SIRINLUEXTERNALCDMNluResponse;

#import <Foundation/Foundation.h>


@interface CDMNLXResponse : NSObject

@property (retain) SIRINLUResponse *siriNLUObj; // ivar: _siriNLUObj
@property (retain) SIRINLUEXTERNALCDMNluResponse *siriNLUTypeObj; // ivar: _siriNLUTypeObj


-(id)initWithSiriNLUObj:(id)arg0 ;
-(id)initWithSiriNLUObj:(id)arg0 siriNLUTypeObj:(id)arg1 ;
-(id)initWithSiriNLUTypeObj:(id)arg0 ;


@end


#endif