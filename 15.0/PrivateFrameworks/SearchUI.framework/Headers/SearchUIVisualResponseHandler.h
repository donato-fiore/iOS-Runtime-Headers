// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIVISUALRESPONSEHANDLER_H
#define SEARCHUIVISUALRESPONSEHANDLER_H

@class VRXVisualResponseProvider;

#import <Foundation/Foundation.h>


@interface SearchUIVisualResponseHandler : NSObject

@property (retain, nonatomic) VRXVisualResponseProvider *provider; // ivar: _provider


-(id)buildResponseView:(id)arg0 delegate:(id)arg1 ;
-(id)init;


@end


#endif