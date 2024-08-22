// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDIALOGSTATE_H
#define DEDIALOGSTATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DEDialogState : NSObject

@property (retain) NSString *catId; // ivar: _catId


-(id)initWithCatId:(id)arg0 ;
-(struct DialogStateFamily )getFamily;
-(struct DialogStateUseCase )getUseCase;


@end


#endif