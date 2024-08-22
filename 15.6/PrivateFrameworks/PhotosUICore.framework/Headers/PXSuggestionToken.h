// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSUGGESTIONTOKEN_H
#define PXSUGGESTIONTOKEN_H


#import <Foundation/Foundation.h>


@interface PXSuggestionToken : NSObject

@property (readonly, nonatomic) BOOL canceled; // ivar: _canceled
@property (nonatomic) NSUInteger token; // ivar: _token


-(id)init;
-(void)cancel;


@end


#endif