// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTOSLOGLOADERTICKET_H
#define DTOSLOGLOADERTICKET_H


#import <Foundation/Foundation.h>


@interface DTOSLogLoaderTicket : NSObject



-(BOOL)needsHold;
-(void)escortAgent:(id)arg0 loader:(id)arg1 ;
-(void)holdAgent:(id)arg0 loader:(id)arg1 ;
-(void)prepareAgent:(id)arg0 loader:(id)arg1 ;


@end


#endif