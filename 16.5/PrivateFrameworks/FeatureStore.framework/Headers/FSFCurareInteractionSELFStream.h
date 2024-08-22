// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FSFCURAREINTERACTIONSELFSTREAM_H
#define FSFCURAREINTERACTIONSELFSTREAM_H

@class NSString;
@protocol FSFStreamSourceProtocol;

#import <Foundation/Foundation.h>


@interface FSFCurareInteractionSELFStream : NSObject <FSFStreamSourceProtocol>

 {
    ? logger;
    ? filter;
    ? provider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)retrieveWithCompletionHandler;
-(BOOL)insert:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithFilter:(id)arg0 ;
-(id)retrieve:(id)arg0 ;
-(void)retrieve:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif