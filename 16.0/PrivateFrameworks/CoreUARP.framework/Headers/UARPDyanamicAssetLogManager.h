// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPDYANAMICASSETLOGMANAGER_H
#define UARPDYANAMICASSETLOGMANAGER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface UARPDyanamicAssetLogManager : NSObject

@property (readonly) NSURL *baseURL; // ivar: _baseURL


-(BOOL)newLog:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithBaseURL:(id)arg0 ;


@end


#endif