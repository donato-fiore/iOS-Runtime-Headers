// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSCFTCPIO_BLOCKCALLBACKS_REFERENT_H
#define __NSCFTCPIO_BLOCKCALLBACKS_REFERENT_H


#import <Foundation/Foundation.h>


@interface __NSCFTCPIO_BlockCallbacks_Referent : NSObject {
    *TCPIO_BlockCallbacks_Listener _readListener;
    *TCPIO_BlockCallbacks_Listener _writeListener;
}




-(id)init;
-(void)dealloc;


@end


#endif