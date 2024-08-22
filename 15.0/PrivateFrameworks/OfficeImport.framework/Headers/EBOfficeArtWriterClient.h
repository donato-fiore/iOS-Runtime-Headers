// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EBOFFICEARTWRITERCLIENT_H
#define EBOFFICEARTWRITERCLIENT_H



#import "OABWriterClient.h"

@interface EBOfficeArtWriterClient : OABWriterClient



-(void)writeClientAnchorFromDrawable:(id)arg0 toObject:(id)arg1 state:(id)arg2 ;
-(void)writeClientDataFromDrawable:(id)arg0 toObject:(id)arg1 state:(id)arg2 ;
-(void)writeClientTextFromShape:(id)arg0 toObject:(id)arg1 state:(id)arg2 ;


@end


#endif