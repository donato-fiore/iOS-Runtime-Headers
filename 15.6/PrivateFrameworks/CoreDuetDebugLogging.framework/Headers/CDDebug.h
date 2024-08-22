// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDDEBUG_H
#define CDDEBUG_H


#import <Foundation/Foundation.h>


@interface CDDebug : NSObject {
    BOOL verboseMode;
}




-(id)init;
-(id)initWithVerboseMode:(BOOL)arg0 ;
-(void)error:(NSInteger)arg0 ;
-(void)log:(char *)arg0 ;


@end


#endif