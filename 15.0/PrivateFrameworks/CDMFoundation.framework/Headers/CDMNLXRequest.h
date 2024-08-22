// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMNLXREQUEST_H
#define CDMNLXREQUEST_H

@class SIRINLURequest, SIRINLUEXTERNALCDMNluRequest;

#import <Foundation/Foundation.h>


@interface CDMNLXRequest : NSObject

@property (retain) SIRINLURequest *siriNLUObj; // ivar: _siriNLUObj
@property (retain) SIRINLUEXTERNALCDMNluRequest *siriNLUTypeObj; // ivar: _siriNLUTypeObj


-(id)initWithSiriNLUObj:(id)arg0 ;
-(id)initWithSiriNLUObj:(id)arg0 siriNLUTypeObj:(id)arg1 ;
-(id)initWithSiriNLUTypeObj:(id)arg0 ;


@end


#endif