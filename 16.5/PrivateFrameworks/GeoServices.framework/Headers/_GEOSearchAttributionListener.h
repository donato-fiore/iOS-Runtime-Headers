// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOSEARCHATTRIBUTIONLISTENER_H
#define _GEOSEARCHATTRIBUTIONLISTENER_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface _GEOSearchAttributionListener : NSObject {
    NSMutableArray *_completionHandlers;
    NSMutableArray *_errorHandlers;
}


@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


-(id)initWithIdentifier:(id)arg0 ;
// -(void)addCompletionHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)handleError:(id)arg0 ;
-(void)handleInfo:(id)arg0 ;


@end


#endif