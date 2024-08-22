// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMNLXREQUESTID_H
#define CDMNLXREQUESTID_H

@class SIRINLURequestID, SIRINLUEXTERNALRequestID;

#import <Foundation/Foundation.h>


@interface CDMNLXRequestID : NSObject

@property (retain) SIRINLURequestID *siriNLUObj; // ivar: _siriNLUObj
@property (retain) SIRINLUEXTERNALRequestID *siriNLUTypeObj; // ivar: _siriNLUTypeObj


-(id)initWithSiriNLUObj:(id)arg0 ;
-(id)initWithSiriNLUObj:(id)arg0 siriNLUTypeObj:(id)arg1 ;
-(id)initWithSiriNLUTypeObj:(id)arg0 ;


@end


#endif